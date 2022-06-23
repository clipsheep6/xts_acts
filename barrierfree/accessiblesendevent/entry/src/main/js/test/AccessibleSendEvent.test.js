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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import accessibility from '@ohos.accessibility'

const bundleName = 'com.sample.testfora11y';
const triggerAction = 'accessibilityFocus';
const eventType = 'accessibilityFocus';

describe('AccessibleSendEventTest', function () {

    beforeEach(async function (done) {
        console.info(`AccessibleSendEventTest: beforeEach starts`);
        done();
    })

    afterEach(async function (done) {
        console.info(`AccessibleSendEventTest: afterEach starts`);
        setTimeout(done, 1000);
    })
    
    /******************************************************************************** */
    /* Cases AccessibleSendEventTest_sendEvent_asyncCallback_0100-0500 */
    /*    are for accessibility.sendEvent() API test                                  */
    /******************************************************************************** */
    
    /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncCallback_0100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncCallback_0100
    * @tc.desc    The parameter input is EventInfo, test the sendEvent() function
    *             The result of sendEvent() should be equal to an error code with no error
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleSendEventTest_sendEvent_asyncCallback_0100', 0, async function (done) {
        console.info('AccessibleSendEventTest_sendEvent_asyncCallback_0100');
        let event = new accessibility.EventInfo();
        event.type = eventType;
        event.bundleName = bundleName;
        event.triggerAction = triggerAction;

        accessibility.sendEvent(event, (err, data) => {
            console.info(`AccessibleSendEventTest:
            AccessibleSendEventTest_sendEvent_asyncCallback_0100 has error: ${err.code}`);
            expect(err.code).assertEqual(0);
            console.info(`AccessibleSendEventTest:
            AccessibleSendEventTest_sendEvent_asyncCallback_0100 has data: ${data}`);
            expect(data).assertEqual(undefined);
            done();
        })
    })

    /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_0200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_0200
    * @tc.desc    The parameter input is EventInfo, test the sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleSendEventTest_sendEvent_asyncPromise_0200', 0, async function (done) {
        console.info('AccessibleSendEventTest_sendEvent_asyncPromise_0200');
        let event = new accessibility.EventInfo();
        event.type = eventType;
        event.bundleName = bundleName;
        event.triggerAction = triggerAction;

        accessibility.sendEvent(event).then((result) => {
            console.info(`AccessibleSendEventTest:
            AccessibleSendEventTest_sendEvent_asyncPromise_0200 result ${result}`);
            expect(result).assertEqual(undefined);
            done();
        }).catch((err) => {
            console.error(`AccessibleSendEventTest:
            AccessibleSendEventTest_sendEvent_asyncPromise_0200 has error: ${err}`);
            expect(null).assertFail();
            done();
        });
    })

    /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncCallback_0300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncCallback_0300
    * @tc.desc    The parameter input is null, test the sendEvent() function
    *             The result of sendEvent() should be equal to an error code with error
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleSendEventTest_sendEvent_asyncCallback_0300', 0, async function (done) {
        console.info('AccessibleSendEventTest_sendEvent_asyncCallback_0300');
        let event = null;

        accessibility.sendEvent(event, (err, data) => {
            console.info(`AccessibleSendEventTest:
            AccessibleSendEventTest_sendEvent_asyncCallback_0300 has error: ${err.code}`);
            expect(err.code).assertEqual(-1);
            console.info(`AccessibleSendEventTest:
            AccessibleSendEventTest_sendEvent_asyncCallback_0300 has data: ${data}`);
            expect(data).assertEqual(undefined);
            done();
        })
    })

    /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncCallback_0400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncCallback_0400
    * @tc.desc    The parameter input is null, test the sendEvent() function
    *             The result of sendEvent() should be equal to a rejected promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleSendEventTest_sendEvent_asyncCallback_0400', 0, async function (done) {
        console.info('AccessibleSendEventTest_sendEvent_asyncCallback_0400');
        let event = null;

        accessibility.sendEvent(event).then((result) => {           
            console.error(`AccessibleSendEventTest:
            AccessibleSendEventTest_sendEvent_asyncCallback_0400 result ${result}`);
            expect(null).assertFail();            
            done();
        }).catch((err) => {
            console.info(`AccessibleSendEventTest:
            AccessibleSendEventTest_sendEvent_asyncCallback_0400 has error: ${err}`);
            expect(err).assertEqual(undefined);
            done();
        });
    })

      /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncCallback_0500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncCallback_0500
    * @tc.desc    The parameter input is EventInfo, test the sendEvent() function
    *             The result of sendEvent() should be equal to an error code with no error
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleSendEventTest_sendEvent_asyncCallback_0500', 0, async function (done) {
      console.info('AccessibleSendEventTest_sendEvent_asyncCallback_0500');
      let jsonObj = {
        type : eventType,
        bundleName : bundleName,
        triggerAction : triggerAction,
      }

      let event = new accessibility.EventInfo(jsonObj);

      accessibility.sendEvent(event, (err, data) => {
          console.info(`AccessibleSendEventTest:
          AccessibleSendEventTest_sendEvent_asyncCallback_0500 has error: ${err.code}`);
          expect(err.code).assertEqual(0);
          console.info(`AccessibleSendEventTest:
          AccessibleSendEventTest_sendEvent_asyncCallback_0500 has data: ${data}`);
          expect(data).assertEqual(undefined);
          done();
      })
    })

    /*********************************************************************************************************** */
    /* Cases AccessibleSendEventTest_sendEvent_asyncPromise_0100-AccessibleSendEventTest_sendEvent_asyncPromise_22600
       are for interface accessibility.EventInfo API test   */
    /*********************************************************************************************************** */

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_0100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_0100
    * @tc.desc    The type of EventInfo is 'accessibilityFocus', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_0100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_0100 starts`);

    let eventType = 'accessibilityFocus';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_0100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_0200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_0200
    * @tc.desc    The type of EventInfo is 'accessibilityFocusClear', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_0200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_0200 starts`);

    let eventType = 'accessibilityFocusClear';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_0200 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_0300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_0300
    * @tc.desc    The type of EventInfo is 'click', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_0300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_0300 starts`);

    let eventType = 'click';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_0300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_0400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_0400
    * @tc.desc    The type of EventInfo is 'longClick', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_0400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_0400 starts`);

    let eventType = 'longClick';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_0400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_0500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_0500
    * @tc.desc    The type of EventInfo is 'focus', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_0500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_0500 starts`);

    let eventType = 'focus';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_0500 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_0600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_0600
    * @tc.desc    The type of EventInfo is 'select', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_0600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_0600 starts`);

    let eventType = 'select';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_0600 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_0700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_0700
    * @tc.desc    The type of EventInfo is 'hoverEnter', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_0700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_0700 starts`);

    let eventType = 'hoverEnter';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_0700 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_0800
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_0800
    * @tc.desc    The type of EventInfo is 'hoverExit', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_0800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_0800 starts`);

    let eventType = 'hoverExit';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_0800 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_0900
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_0900
    * @tc.desc    The type of EventInfo is 'textUpdate', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_0900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_0900 starts`);

    let eventType = 'textUpdate';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_0900 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_1000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_1000
    * @tc.desc    The type of EventInfo is 'textSelectionUpdate', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_1000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_1000 starts`);

    let eventType = 'textSelectionUpdate';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_1000 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_1100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_1100
    * @tc.desc    The type of EventInfo is 'scroll', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_1100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_1100 starts`);

    let eventType = 'scroll';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_1100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_1200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_1200
    * @tc.desc    The type of EventInfo is 'textMoveUnit', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_1200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_1200 starts`);

    let eventType = 'textMoveUnit';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_1200 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_1300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_1300
    * @tc.desc    The type of EventInfo is 'touchBegin', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_1300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_1300 starts`);

    let eventType = 'touchBegin';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_1300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_1400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_1400
    * @tc.desc    The type of EventInfo is 'touchEnd', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_1400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_1400 starts`);

    let eventType = 'touchEnd';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_1400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_1500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_1500
    * @tc.desc    The type of EventInfo is 'touchGuideBegin', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_1500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_1500 starts`);

    let eventType = 'touchGuideBegin';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_1500 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_1600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_1600
    * @tc.desc    The type of EventInfo is 'touchGuideEnd', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_1600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_1600 starts`);

    let eventType = 'touchGuideEnd';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_1600 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_1700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_1700
    * @tc.desc    The type of EventInfo is 'touchGuideGestureBegin', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_1700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_1700 starts`);

    let eventType = 'touchGuideGestureBegin';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_1700 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_1800
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_1800
    * @tc.desc    The type of EventInfo is 'touchGuideGestureEnd', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_1800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_1800 starts`);

    let eventType = 'touchGuideGestureEnd';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_1800 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_1900
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_1900
    * @tc.desc    The type of EventInfo is 'windowUpdate', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_1900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_1900 starts`);

    let eventType = 'windowUpdate';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_1900 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_2000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_2000
    * @tc.desc    The type of EventInfo is 'pageContentUpdate', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_2000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2000 starts`);

    let eventType = 'pageContentUpdate';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2000 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_2100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_2100
    * @tc.desc    The type of EventInfo is 'pageStateUpdate', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_2100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2100 starts`);

    let eventType = 'pageStateUpdate';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_2200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_2200
    * @tc.desc    The type of EventInfo is 'publicNotice', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_2200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2200 starts`);

    let eventType = 'publicNotice';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2200 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_2300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_2300
    * @tc.desc    The type of EventInfo is 'notificationUpdate', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_2300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2300 starts`);

    let eventType = 'notificationUpdate';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_2400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_2400
    * @tc.desc    The type of EventInfo is 'interrupt', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_2400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2400 starts`);

    let eventType = 'interrupt';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_2500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_2500
    * @tc.desc    The type of EventInfo is 'gesture', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_2500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2500 starts`);

    let eventType = 'gesture';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2500 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_2600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_2600
    * @tc.desc    The type of EventInfo is '', test sendEvent() function
    *             The result of sendEvent() should be equal to a rejected promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_2600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2600 starts`);

    let eventType = '';
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) =>{           
        console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2600 result ${result}`);
        expect(null).assertFail();  
        done();          
    }).catch((err) => {
        console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2600 has error: ${err}`);
        expect(err).assertEqual(undefined);
        done();    
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_2700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_2700
    * @tc.desc    The type of EventInfo is null, test sendEvent() function
    *             The result of sendEvent() should be equal to a rejected promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_2700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2700 starts`);

    let eventType = null;
    let event = new accessibility.EventInfo();
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) =>{           
        console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2700 result ${result}`);
        expect(null).assertFail();  
        done();          
    }).catch((err) => {
        console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2700 has error: ${err}`);
        expect(err).assertEqual(undefined);
        done();    
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_2800
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_2800
    * @tc.desc    The windowUpdateType of EventInfo is 'add', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_2800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2800 starts`);

    let event = new accessibility.EventInfo();
    let windowUpdateType = 'add';
    let eventType = 'windowUpdate';
    event.type = eventType;
    event.windowUpdateType = windowUpdateType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2800 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_2900
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_2900
    * @tc.desc    The windowUpdateType of EventInfo is 'remove', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_2900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2900 starts`);

    let event = new accessibility.EventInfo();
    let windowUpdateType = 'remove';
    let eventType = 'windowUpdate';
    event.type = eventType;
    event.windowUpdateType = windowUpdateType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_2900 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_3000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_3000
    * @tc.desc    The windowUpdateType of EventInfo is 'title', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_3000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_3000 starts`);

    let event = new accessibility.EventInfo();
    let windowUpdateType = 'title';
    let eventType = 'windowUpdate';
    event.type = eventType;
    event.windowUpdateType = windowUpdateType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_3000 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_3100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_3100
    * @tc.desc    The windowUpdateType of EventInfo is 'bounds', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_3100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_3100 starts`);

    let event = new accessibility.EventInfo();
    let windowUpdateType = 'bounds';
    let eventType = 'windowUpdate';
    event.type = eventType;
    event.windowUpdateType = windowUpdateType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_3100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_3200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_3200
    * @tc.desc    The windowUpdateType of EventInfo is 'layer', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_3200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_3200 starts`);

    let event = new accessibility.EventInfo();
    let windowUpdateType = 'layer';
    let eventType = 'windowUpdate';
    event.type = eventType;
    event.windowUpdateType = windowUpdateType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_3200 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_3300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_3300
    * @tc.desc    The windowUpdateType of EventInfo is 'active', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_3300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_3300 starts`);

    let event = new accessibility.EventInfo();
    let windowUpdateType = 'active';
    let eventType = 'windowUpdate';
    event.type = eventType;
    event.windowUpdateType = windowUpdateType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_3300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_3400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_3400
    * @tc.desc    The windowUpdateType of EventInfo is 'focus', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_3400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_3400 starts`);

    let event = new accessibility.EventInfo();
    let windowUpdateType = 'focus';
    let eventType = 'windowUpdate';
    event.type = eventType;
    event.windowUpdateType = windowUpdateType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_3400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

    /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_3500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_3500
    * @tc.desc    The type of EventInfo is null, test sendEvent() function
    *             The result of sendEvent() should be equal to a rejected promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleSendEventTest_sendEvent_asyncPromise_3500', 0, async function (done) {
      console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_3500 starts`);
  
      let event = new accessibility.EventInfo();
      let windowUpdateType = 'focus';
      event.type = eventType;
      event.windowUpdateType = windowUpdateType;
      event.bundleName = bundleName;
      event.triggerAction = triggerAction;
      accessibility.sendEvent(event).then((result) =>{           
          console.error(`AccessibleSendEventTest:
          AccessibleSendEventTest_sendEvent_asyncPromise_3500 result ${result}`);
          expect(null).assertFail();  
          done();          
      }).catch((err) => {
          console.info(`AccessibleSendEventTest:
          AccessibleSendEventTest_sendEvent_asyncPromise_3500 has error: ${err}`);
          expect(err).assertEqual(undefined);
          done();    
      });
    })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_3600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_3600
    * @tc.desc    The windowUpdateType of EventInfo is '', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_3600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_3600 starts`);

    let event = new accessibility.EventInfo();
    let windowUpdateType = '';
    let eventType = 'windowUpdate';
    event.type = eventType;
    event.windowUpdateType = windowUpdateType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_3600 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_3700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_3700
    * @tc.desc    The windowUpdateType of EventInfo is null, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_3700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_3700 starts`);

    let event = new accessibility.EventInfo();
    let windowUpdateType = null;
    let eventType = 'windowUpdate';
    event.type = eventType;
    event.windowUpdateType = windowUpdateType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_3700 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_3800
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_3800
    * @tc.desc    The bundleName of EventInfo is 'com.ixaa.testfora11y', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_3800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_3800 starts`);

    let event = new accessibility.EventInfo();
    let localBundleName = 'com.ixaa.testfora11y';
    event.type = eventType;
    event.bundleName = localBundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_3800 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_3900
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_3900
    * @tc.desc    The bundleName of EventInfo is '', test sendEvent() function
    *             The result of sendEvent() should be equal to a rejected promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_3900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_3900 starts`);

    let event = new accessibility.EventInfo();
    let localBundleName = '';
    event.type = eventType;
    event.bundleName = localBundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) =>{           
        console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_3900 result ${result}`);
        expect(null).assertFail();  
        done();          
    }).catch((err) => {
        console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_3900 has error: ${err}`);
        expect(err).assertEqual(undefined);
        done();    
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_4000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_4000
    * @tc.desc    The bundleName of EventInfo is null, test sendEvent() function
    *             The result of sendEvent() should be equal to a rejected promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_4000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_4000 starts`);

    let event = new accessibility.EventInfo();
    let localBundleName = null;
    event.type = eventType;
    event.bundleName = localBundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) =>{           
        console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_4000 result ${result}`);
        expect(null).assertFail();  
        done();          
    }).catch((err) => {
        console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_4000 has error: ${err}`);
        expect(err).assertEqual(undefined);
        done();    
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_4100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_4100
    * @tc.desc    The componentType of EventInfo is 'button', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_4100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_4100 starts`);

    let event = new accessibility.EventInfo();
    let componentType = 'button';
    event.type = eventType;
    event.bundleName = bundleName;
    event.componentType = componentType;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_4100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_4200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_4200
    * @tc.desc    The componentType of EventInfo is '', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_4200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_4200 starts`);

    let event = new accessibility.EventInfo();
    let componentType = '';
    event.type = eventType;
    event.bundleName = bundleName;
    event.componentType = componentType;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_4200 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_4300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_4300
    * @tc.desc    The componentType of EventInfo is null, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_4300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_4300 starts`);

    let event = new accessibility.EventInfo();
    let componentType = null;
    event.type = eventType;
    event.bundleName = bundleName;
    event.componentType = componentType;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_4300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_4400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_4400
    * @tc.desc    The pageId of EventInfo is 1, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_4400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_4400 starts`);

    let event = new accessibility.EventInfo();
    let pageId = 1;
    event.type = eventType;
    event.bundleName = bundleName;
    event.pageId = pageId;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_4400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_4500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_4500
    * @tc.desc    The pageId of EventInfo is 0, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_4500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_4500 starts`);

    let event = new accessibility.EventInfo();
    let pageId = 0;
    event.type = eventType;
    event.bundleName = bundleName;
    event.pageId = pageId;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_4500 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_4600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_4600
    * @tc.desc    The pageId of EventInfo is -1, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_4600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_4600 starts`);

    let event = new accessibility.EventInfo();
    let pageId = -1;
    event.type = eventType;
    event.bundleName = bundleName;
    event.pageId = pageId;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_4600 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_4700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_4700
    * @tc.desc    The description of EventInfo is '1', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_4700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_4700 starts`);

    let event = new accessibility.EventInfo();
    let description = '1';
    event.type = eventType;
    event.bundleName = bundleName;
    event.description = description;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_4700 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_4800
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_4800
    * @tc.desc    The description of EventInfo is '', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_4800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_4800 starts`);

    let event = new accessibility.EventInfo();
    let description = '';
    event.type = eventType;
    event.bundleName = bundleName;
    event.description = description;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_4800 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_4900
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_4900
    * @tc.desc    The description of EventInfo is null, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_4900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_4900 starts`);

    let event = new accessibility.EventInfo();
    let description = null;
    event.type = eventType;
    event.bundleName = bundleName;
    event.description = description;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_4900 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_5000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_5000
    * @tc.desc    The triggerAction of EventInfo is 'accessibilityFocus', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_5000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_5000 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'accessibilityFocus';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_5000 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_5100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_5100
    * @tc.desc    The triggerAction of EventInfo is 'clearAccessibilityFocus', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_5100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_5100 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'clearAccessibilityFocus';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_5100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_5200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_5200
    * @tc.desc    The triggerAction of EventInfo is 'focus', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_5200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_5200 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'focus';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_5200 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_5300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_5300
    * @tc.desc    The triggerAction of EventInfo is 'clearFocus', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_5300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_5300 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'clearFocus';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_5300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_5400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_5400
    * @tc.desc    The triggerAction of EventInfo is 'clearSelection', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_5400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_5400 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'clearSelection';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_5400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_5500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_5500
    * @tc.desc    The triggerAction of EventInfo is 'click', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_5500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_5500 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'click';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_5500 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_5600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_5600
    * @tc.desc    The triggerAction of EventInfo is 'longClick', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_5600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_5600 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'longClick';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_5600 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_5700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_5700
    * @tc.desc    The triggerAction of EventInfo is 'cut', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_5700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_5700 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'cut';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_5700 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_5800
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_5800
    * @tc.desc    The triggerAction of EventInfo is 'copy', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_5800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_5800 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'copy';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_5800 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_5900
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_5900
    * @tc.desc    The triggerAction of EventInfo is 'paste', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_5900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_5900 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'paste';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_5900 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_6000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_6000
    * @tc.desc    The triggerAction of EventInfo is 'select', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_6000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_6000 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'select';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_6000 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_6100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_6100
    * @tc.desc    The triggerAction of EventInfo is 'setText', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_6100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_6100 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'setText';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_6100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_6200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_6200
    * @tc.desc    The triggerAction of EventInfo is 'delete', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_6200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_6200 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'delete';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_6200 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_6300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_6300
    * @tc.desc    The triggerAction of EventInfo is 'scrollForward', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_6300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_6300 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'scrollForward';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_6300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_6400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_6400
    * @tc.desc    The triggerAction of EventInfo is 'scrollBackward', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_6400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_6400 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'scrollBackward';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_6400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_6500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_6500
    * @tc.desc    The triggerAction of EventInfo is 'setSelection', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_6500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_6500 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'setSelection';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_6500 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_6600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_6600
    * @tc.desc    The triggerAction of EventInfo is 'unfold', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_6600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_6600 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'unfold';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_6600 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_6700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_6700
    * @tc.desc    The triggerAction of EventInfo is 'fold', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_6700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_6700 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'fold';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_6700 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_6800
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_6800
    * @tc.desc    The triggerAction of EventInfo is 'nextText', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_6800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_6800 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'nextText';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_6800 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_6900
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_6900
    * @tc.desc    The triggerAction of EventInfo is 'previousText', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_6900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_6900 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'previousText';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_6900 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_7000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_7000
    * @tc.desc    The triggerAction of EventInfo is 'nextHtmlItem', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_7000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7000 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'nextHtmlItem';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7000 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_7100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_7100
    * @tc.desc    The triggerAction of EventInfo is 'previousHtmlItem', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_7100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7100 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = 'previousHtmlItem';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_7200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_7200
    * @tc.desc    The triggerAction of EventInfo is '', test sendEvent() function
    *             The result of sendEvent() should be equal to a rejected promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_7200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7200 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = '';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) =>{           
        console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7500 result ${result}`);
        expect(null).assertFail();  
        done();          
    }).catch((err) => {
        console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7500 has error: ${err}`);
        expect(err).assertEqual(undefined);
        done();    
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_7300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_7300
    * @tc.desc    The triggerAction of EventInfo is null, test sendEvent() function
    *             The result of sendEvent() should be equal to a rejected promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_7300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7300 starts`);

    let event = new accessibility.EventInfo();
    let triggerAction = null;
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) =>{           
        console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7300 result ${result}`);
        expect(null).assertFail();  
        done();          
    }).catch((err) => {
        console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7300 has error: ${err}`);
        expect(err).assertEqual(undefined);
        done();    
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_7400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_7400
    * @tc.desc    The textMoveUnit of EventInfo is 'char', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_7400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7400 starts`);

    let event = new accessibility.EventInfo();
    let textMoveUnit = 'char';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.textMoveUnit = textMoveUnit;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_7500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_7500
    * @tc.desc    The textMoveUnit of EventInfo is 'word', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_7500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7500 starts`);

    let event = new accessibility.EventInfo();
    let textMoveUnit = 'word';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.textMoveUnit = textMoveUnit;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7500 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_7600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_7600
    * @tc.desc    The textMoveUnit of EventInfo is 'line', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_7600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7600 starts`);

    let event = new accessibility.EventInfo();
    let textMoveUnit = 'line';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.textMoveUnit = textMoveUnit;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7600 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_7700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_7700
    * @tc.desc    The textMoveUnit of EventInfo is 'page', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_7700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7700 starts`);

    let event = new accessibility.EventInfo();
    let textMoveUnit = 'page';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.textMoveUnit = textMoveUnit;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7700 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_7800
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_7800
    * @tc.desc    The textMoveUnit of EventInfo is 'paragraph', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_7800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7800 starts`);

    let event = new accessibility.EventInfo();
    let textMoveUnit = 'paragraph';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.textMoveUnit = textMoveUnit;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7800 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_7900
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_7900
    * @tc.desc    The textMoveUnit of EventInfo is '', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_7900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7900 starts`);

    let event = new accessibility.EventInfo();
    let textMoveUnit = '';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.textMoveUnit = textMoveUnit;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_7900 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_8000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_8000
    * @tc.desc    The textMoveUnit of EventInfo is null, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_8000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_8000 starts`);

    let event = new accessibility.EventInfo();
    let textMoveUnit = null;
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.textMoveUnit = textMoveUnit;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_8000 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_8100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_8100
    * @tc.desc    The contents of EventInfo is ['1'], test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_8100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_8100 starts`);

    let event = new accessibility.EventInfo();
    let contents = ['1'];
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.contents = contents;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_8100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_8200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_8200
    * @tc.desc    The contents of EventInfo is [], test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_8200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_8200 starts`);

    let event = new accessibility.EventInfo();
    let contents = [];
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.contents = contents;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_8200 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_8300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_8300
    * @tc.desc    The lastContent of EventInfo is '1', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_8300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_8300 starts`);

    let event = new accessibility.EventInfo();
    let lastContent = '1';
    event.type = eventType;
    event.bundleName = bundleName;
    event.lastContent = lastContent;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_8300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_8400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_8400
    * @tc.desc    The lastContent of EventInfo is '', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_8400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_8400 starts`);

    let event = new accessibility.EventInfo();
    let lastContent = '';
    event.type = eventType;
    event.bundleName = bundleName;
    event.lastContent = lastContent;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_8400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_8500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_8500
    * @tc.desc    The lastContent of EventInfo is null, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_8500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_8500 starts`);

    let event = new accessibility.EventInfo();
    let lastContent = null;
    event.type = eventType;
    event.bundleName = bundleName;
    event.lastContent = lastContent;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_8500 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })


  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_8600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_8600
    * @tc.desc    The beginIndex of EventInfo is 1, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_8600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_8600 starts`);

    let event = new accessibility.EventInfo();
    let beginIndex = 1;
    event.type = eventType;
    event.bundleName = bundleName;
    event.beginIndex = beginIndex;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_8600 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_8700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_8700
    * @tc.desc    The beginIndex of EventInfo is 0, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_8700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_8700 starts`);

    let event = new accessibility.EventInfo();
    let beginIndex = 0;
    event.type = eventType;
    event.bundleName = bundleName;
    event.beginIndex = beginIndex;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_8700 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_8800
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_8800
    * @tc.desc    The beginIndex of EventInfo is -1, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_8800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_8800 starts`);

    let event = new accessibility.EventInfo();
    let beginIndex = -1;
    event.type = eventType;
    event.bundleName = bundleName;
    event.beginIndex = beginIndex;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_8800 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
      * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_8900
      * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_8900
      * @tc.desc    The currentIndex of EventInfo is 1, test sendEvent() function
      *             The result of sendEvent() should be equal to a promise of undefined
      * @tc.size    SmallTest
      * @tc.type    User
      */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_8900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_8900 starts`);

    let event = new accessibility.EventInfo();
    let currentIndex = 1;
    event.type = eventType;
    event.bundleName = bundleName;
    event.currentIndex = currentIndex;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_8900 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_9000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_9000
    * @tc.desc    The currentIndex of EventInfo is 0, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_9000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_9000 starts`);

    let event = new accessibility.EventInfo();
    let currentIndex = 0;
    event.type = eventType;
    event.bundleName = bundleName;
    event.currentIndex = currentIndex;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_9000 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_9100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_9100
    * @tc.desc    The currentIndex of EventInfo is -1, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_9100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_9100 starts`);

    let event = new accessibility.EventInfo();
    let currentIndex = -1;
    event.type = eventType;
    event.bundleName = bundleName;
    event.currentIndex = currentIndex;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_9100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
      * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_9200
      * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_9200
      * @tc.desc    The endIndex of EventInfo is 1, test sendEvent() function
      *             The result of sendEvent() should be equal to a promise of undefined
      * @tc.size    SmallTest
      * @tc.type    User
      */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_9200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_9200 starts`);

    let event = new accessibility.EventInfo();
    let endIndex = 1;
    event.type = eventType;
    event.bundleName = bundleName;
    event.endIndex = endIndex;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_9200 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_9300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_9300
    * @tc.desc    The endIndex of EventInfo is 0, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_9300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_9300 starts`);

    let event = new accessibility.EventInfo();
    let endIndex = 0;
    event.type = eventType;
    event.bundleName = bundleName;
    event.endIndex = endIndex;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_9300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_9400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_9400
    * @tc.desc    The endIndex of EventInfo is -1, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_9400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_9400 starts`);

    let event = new accessibility.EventInfo();
    let endIndex = -1;
    event.type = eventType;
    event.bundleName = bundleName;
    event.endIndex = endIndex;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_9400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
      * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_9500
      * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_9500
      * @tc.desc    The itemCount of EventInfo is 1, test sendEvent() function
      *             The result of sendEvent() should be equal to a promise of undefined
      * @tc.size    SmallTest
      * @tc.type    User
      */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_9500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_9500 starts`);

    let event = new accessibility.EventInfo();
    let itemCount = 1;
    event.type = eventType;
    event.bundleName = bundleName;
    event.itemCount = itemCount;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_9500 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_9600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_9600
    * @tc.desc    The itemCount of EventInfo is 0, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_9600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_9600 starts`);

    let event = new accessibility.EventInfo();
    let itemCount = 0;
    event.type = eventType;
    event.bundleName = bundleName;
    event.itemCount = itemCount;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_9600 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_9700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_9700
    * @tc.desc    The itemCount of EventInfo is -1, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_9700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_9700 starts`);

    let event = new accessibility.EventInfo();
    let itemCount = -1;
    event.type = eventType;
    event.bundleName = bundleName;
    event.itemCount = itemCount;
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_9700 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_9800
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_9800
    * @tc.desc    The categoryNotification of EventInfo is 'call', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_9800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_9800 starts`);

    let event = new accessibility.EventInfo();
    let categoryNotification = 'call';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.categoryNotification = categoryNotification;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_9800 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_9900
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_9900
    * @tc.desc    The categoryNotification of EventInfo is 'msg', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_9900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_9900 starts`);

    let event = new accessibility.EventInfo();
    let categoryNotification = 'msg';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.categoryNotification = categoryNotification;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_9900 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_10000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_10000
    * @tc.desc    The categoryNotification of EventInfo is 'email', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_10000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_10000 starts`);

    let event = new accessibility.EventInfo();
    let categoryNotification = 'email';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.categoryNotification = categoryNotification;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_10000 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_10100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_10100
    * @tc.desc    The categoryNotification of EventInfo is 'event', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_10100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_10100 starts`);

    let event = new accessibility.EventInfo();
    let categoryNotification = 'event';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.categoryNotification = categoryNotification;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_10100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_10200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_10200
    * @tc.desc    The categoryNotification of EventInfo is 'promo', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_10200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_10200 starts`);

    let event = new accessibility.EventInfo();
    let categoryNotification = 'promo';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.categoryNotification = categoryNotification;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_10200 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_10300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_10300
    * @tc.desc    The categoryNotification of EventInfo is 'alarm', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_10300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_10300 starts`);

    let event = new accessibility.EventInfo();
    let categoryNotification = 'alarm';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.categoryNotification = categoryNotification;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_10300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_10400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_10400
    * @tc.desc    The categoryNotification of EventInfo is 'progress', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_10400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_10400 starts`);

    let event = new accessibility.EventInfo();
    let categoryNotification = 'progress';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.categoryNotification = categoryNotification;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_10400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_10500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_10500
    * @tc.desc    The categoryNotification of EventInfo is 'social', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_10500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_10500 starts`);

    let event = new accessibility.EventInfo();
    let categoryNotification = 'social';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.categoryNotification = categoryNotification;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_10500 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_10600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_10600
    * @tc.desc    The categoryNotification of EventInfo is 'err', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_10600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_10600 starts`);

    let event = new accessibility.EventInfo();
    let categoryNotification = 'err';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.categoryNotification = categoryNotification;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_10600 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_10700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_10700
    * @tc.desc    The categoryNotification of EventInfo is 'transport', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_10700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_10700 starts`);

    let event = new accessibility.EventInfo();
    let categoryNotification = 'transport';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.categoryNotification = categoryNotification;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_10700 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_10800
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_10800
    * @tc.desc    The categoryNotification of EventInfo is 'sys', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_10800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_10800 starts`);

    let event = new accessibility.EventInfo();
    let categoryNotification = 'sys';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.categoryNotification = categoryNotification;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_10800 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_10900
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_10900
    * @tc.desc    The categoryNotification of EventInfo is 'service', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_10900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_10900 starts`);

    let event = new accessibility.EventInfo();
    let categoryNotification = 'service';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.categoryNotification = categoryNotification;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_10900 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_11000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_11000
    * @tc.desc    The categoryNotification of EventInfo is '', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_11000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_11000 starts`);

    let event = new accessibility.EventInfo();
    let categoryNotification = '';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.categoryNotification = categoryNotification;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_11000 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_11100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_11100
    * @tc.desc    The categoryNotification of EventInfo is null, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_11100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_11100 starts`);

    let event = new accessibility.EventInfo();
    let categoryNotification = null;
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.categoryNotification = categoryNotification;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_11100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_11200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_11200
    * @tc.desc    The gestureType of EventInfo is 'left', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_11200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_11200 starts`);

    let event = new accessibility.EventInfo();
    let gestureType = 'left';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.gestureType = gestureType;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_11200 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_11300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_11300
    * @tc.desc    The gestureType of EventInfo is 'leftThenRight', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_11300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_11300 starts`);

    let event = new accessibility.EventInfo();
    let gestureType = 'leftThenRight';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.gestureType = gestureType;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_11300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_11400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_11400
    * @tc.desc    The gestureType of EventInfo is 'leftThenUp', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_11400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_11400 starts`);

    let event = new accessibility.EventInfo();
    let gestureType = 'leftThenUp';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.gestureType = gestureType;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_11400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_11500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_11500
    * @tc.desc    The gestureType of EventInfo is 'leftThenDown', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_11500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_11500 starts`);

    let event = new accessibility.EventInfo();
    let gestureType = 'leftThenDown';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.gestureType = gestureType;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_11500 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_11600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_11600
    * @tc.desc    The gestureType of EventInfo is 'right', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_11600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_11600 starts`);

    let event = new accessibility.EventInfo();
    let gestureType = 'right';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.gestureType = gestureType;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_11600 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_11700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_11700
    * @tc.desc    The gestureType of EventInfo is 'rightThenLeft', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_11700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_11700 starts`);

    let event = new accessibility.EventInfo();
    let gestureType = 'rightThenLeft';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.gestureType = gestureType;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_11700 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_11800
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_11800
    * @tc.desc    The gestureType of EventInfo is 'rightThenUp', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_11800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_11800 starts`);

    let event = new accessibility.EventInfo();
    let gestureType = 'rightThenUp';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.gestureType = gestureType;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_11800 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_11900
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_11900
    * @tc.desc    The gestureType of EventInfo is 'rightThenDown', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_11900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_11900 starts`);

    let event = new accessibility.EventInfo();
    let gestureType = 'rightThenDown';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.gestureType = gestureType;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_11900 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_12000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_12000
    * @tc.desc    The gestureType of EventInfo is 'up', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_12000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_12000 starts`);

    let event = new accessibility.EventInfo();
    let gestureType = 'up';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.gestureType = gestureType;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_12000 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_12100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_12100
    * @tc.desc    The gestureType of EventInfo is 'upThenLeft', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_12100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_12100 starts`);

    let event = new accessibility.EventInfo();
    let gestureType = 'upThenLeft';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.gestureType = gestureType;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_12100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_12200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_12200
    * @tc.desc    The gestureType of EventInfo is 'upThenRight', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_12200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_12200 starts`);

    let event = new accessibility.EventInfo();
    let gestureType = 'upThenRight';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.gestureType = gestureType;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_12200 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_12300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_12300
    * @tc.desc    The gestureType of EventInfo is 'upThenDown', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_12300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_12300 starts`);

    let event = new accessibility.EventInfo();
    let gestureType = 'upThenDown';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.gestureType = gestureType;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_12300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_12400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_12400
    * @tc.desc    The gestureType of EventInfo is 'down', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_12400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_12400 starts`);

    let event = new accessibility.EventInfo();
    let gestureType = 'down';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.gestureType = gestureType;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_12400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_12500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_12500
    * @tc.desc    The gestureType of EventInfo is 'downThenLeft', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_12500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_12500 starts`);

    let event = new accessibility.EventInfo();
    let gestureType = 'downThenLeft';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.gestureType = gestureType;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_12500 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_12600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_12600
    * @tc.desc    The gestureType of EventInfo is 'downThenRight', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_12600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_12600 starts`);

    let event = new accessibility.EventInfo();
    let gestureType = 'downThenRight';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.gestureType = gestureType;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_12600 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_12700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_12700
    * @tc.desc    The gestureType of EventInfo is 'downThenUp', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_12700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_12700 starts`);

    let event = new accessibility.EventInfo();
    let gestureType = 'downThenUp';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.gestureType = gestureType;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_12700 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_12800
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_12800
    * @tc.desc    The gestureType of EventInfo is '', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_12800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_12800 starts`);

    let event = new accessibility.EventInfo();
    let gestureType = '';
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.gestureType = gestureType;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_12800 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_12900
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_12900
    * @tc.desc    The gestureType of EventInfo is null, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_12900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_12900 starts`);

    let event = new accessibility.EventInfo();
    let gestureType = null;
    event.type = eventType;
    event.bundleName = bundleName;
    event.triggerAction = triggerAction;
    event.gestureType = gestureType;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_12900 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

    /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_13000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_13000
    * @tc.desc    The type of EventInfo is 'accessibilityFocus', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_13000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_13000 starts`);

    let eventType = 'accessibilityFocus';

    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_13000 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_13100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_13100
    * @tc.desc    The type of EventInfo is 'accessibilityFocusClear', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_13100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_13100 starts`);

    let eventType = 'accessibilityFocusClear';

    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);

    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_13100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_13200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_13200
    * @tc.desc    The type of EventInfo is 'click', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_13200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_13200 starts`);

    let eventType = 'click';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_13200 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_13300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_13300
    * @tc.desc    The type of EventInfo is 'longClick', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_13300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_13300 starts`);

    let eventType = 'longClick';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_13300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_13400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_13400
    * @tc.desc    The type of EventInfo is 'focus', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_13400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_13400 starts`);

    let eventType = 'focus';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_13400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_13500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_13500
    * @tc.desc    The type of EventInfo is 'select', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_13500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_13500 starts`);

    let eventType = 'select';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_13500 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_13600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_13600
    * @tc.desc    The type of EventInfo is 'hoverEnter', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_13600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_13600 starts`);

    let eventType = 'hoverEnter';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_13600 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_13700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_13700
    * @tc.desc    The type of EventInfo is 'hoverExit', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_13700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_13700 starts`);

    let eventType = 'hoverExit';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_13700 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_13800
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_13800
    * @tc.desc    The type of EventInfo is 'textUpdate', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_13800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_13800 starts`);

    let eventType = 'textUpdate';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_13800 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_13900
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_13900
    * @tc.desc    The type of EventInfo is 'textSelectionUpdate', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_13900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_13900 starts`);

    let eventType = 'textSelectionUpdate';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_13900 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_14000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_14000
    * @tc.desc    The type of EventInfo is 'scroll', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_14000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_14000 starts`);

    let eventType = 'scroll';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_14000 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_14100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_14100
    * @tc.desc    The type of EventInfo is 'textMoveUnit', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_14100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_14100 starts`);

    let eventType = 'textMoveUnit';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_14100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_14200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_14200
    * @tc.desc    The type of EventInfo is 'touchBegin', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_14200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_14200 starts`);

    let eventType = 'touchBegin';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_14200 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_14300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_14300
    * @tc.desc    The type of EventInfo is 'touchEnd', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_14300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_14300 starts`);

    let eventType = 'touchEnd';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_14300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_14400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_14400
    * @tc.desc    The type of EventInfo is 'touchGuideBegin', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_14400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_14400 starts`);

    let eventType = 'touchGuideBegin';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_14400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_14500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_14500
    * @tc.desc    The type of EventInfo is 'touchGuideEnd', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_14500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_14500 starts`);

    let eventType = 'touchGuideEnd';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_14500 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_14600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_14600
    * @tc.desc    The type of EventInfo is 'touchGuideGestureBegin', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_14600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_14600 starts`);

    let eventType = 'touchGuideGestureBegin';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    event.triggerAction = triggerAction;
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_14600 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_14700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_14700
    * @tc.desc    The type of EventInfo is 'touchGuideGestureEnd', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_14700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_14700 starts`);

    let eventType = 'touchGuideGestureEnd';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_14700 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_14800
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_14800
    * @tc.desc    The type of EventInfo is 'windowUpdate', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_14800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_14800 starts`);

    let eventType = 'windowUpdate';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_14800 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_14900
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_14900
    * @tc.desc    The type of EventInfo is 'pageContentUpdate', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_14900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_14900 starts`);

    let eventType = 'pageContentUpdate';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_14900 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_15000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_15000
    * @tc.desc    The type of EventInfo is 'pageStateUpdate', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_15000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15000 starts`);

    let eventType = 'pageStateUpdate';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15000 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_15100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_15100
    * @tc.desc    The type of EventInfo is 'publicNotice', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_15100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15100 starts`);

    let eventType = 'publicNotice';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_15200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_15200
    * @tc.desc    The type of EventInfo is 'notificationUpdate', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_15200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15200 starts`);

    let eventType = 'notificationUpdate';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15200 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_15300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_15300
    * @tc.desc    The type of EventInfo is 'interrupt', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_15300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15300 starts`);

    let eventType = 'interrupt';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_15400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_15400
    * @tc.desc    The type of EventInfo is 'gesture', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_15400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15400 starts`);

    let eventType = 'gesture';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_15500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_15500
    * @tc.desc    The type of EventInfo is '', test sendEvent() function
    *             The result of sendEvent() should be equal to a rejected promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_15500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15500 starts`);

    let eventType = '';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) =>{           
        console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15500 result ${result}`);
        expect(null).assertFail();  
        done();          
    }).catch((err) => {
        console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15500 has error: ${err}`);
        expect(err).assertEqual(undefined);
        done();    
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_15600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_15600
    * @tc.desc    The type of EventInfo is null, test sendEvent() function
    *             The result of sendEvent() should be equal to a rejected promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_15600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15600 starts`);

    let eventType = null;
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) =>{           
        console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15600 result ${result}`);
        expect(null).assertFail();  
        done();          
    }).catch((err) => {
        console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15600 has error: ${err}`);
        expect(err).assertEqual(undefined);
        done();    
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_15700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_15700
    * @tc.desc    The windowUpdateType of EventInfo is 'add', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_15700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15700 starts`);

    let windowUpdateType = 'add';
    let eventType = 'windowUpdate';
    let jsonObj = {
      type : eventType,
      windowUpdateType : windowUpdateType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15700 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_15800
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_15800
    * @tc.desc    The windowUpdateType of EventInfo is 'remove', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_15800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15800 starts`);

    let windowUpdateType = 'remove';
    let eventType = 'windowUpdate';
    let jsonObj = {
      type : eventType,
      windowUpdateType : windowUpdateType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15800 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_15900
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_15900
    * @tc.desc    The windowUpdateType of EventInfo is 'title', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_15900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15900 starts`);

    let windowUpdateType = 'title';
    let eventType = 'windowUpdate';
    let jsonObj = {
      type : eventType,
      windowUpdateType : windowUpdateType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_15900 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_16000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_16000
    * @tc.desc    The windowUpdateType of EventInfo is 'bounds', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_16000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_16000 starts`);

    let windowUpdateType = 'bounds';
    let eventType = 'windowUpdate';
    let jsonObj = {
      type : eventType,
      windowUpdateType : windowUpdateType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_16000 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_16100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_16100
    * @tc.desc    The windowUpdateType of EventInfo is 'layer', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_16100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_16100 starts`);

    let windowUpdateType = 'layer';
    let eventType = 'windowUpdate';
    let jsonObj = {
      type : eventType,
      windowUpdateType : windowUpdateType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_16100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_16200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_16200
    * @tc.desc    The windowUpdateType of EventInfo is 'active', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_16200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_16200 starts`);

    let windowUpdateType = 'active';
    let eventType = 'windowUpdate';
    let jsonObj = {
      type : eventType,
      windowUpdateType : windowUpdateType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_16200 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_16300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_16300
    * @tc.desc    The windowUpdateType of EventInfo is 'focus', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_16300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_16300 starts`);

    let windowUpdateType = 'focus';
    let eventType = 'windowUpdate';
    let jsonObj = {
      type : eventType,
      windowUpdateType : windowUpdateType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_16300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

    /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_16400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_16400
    * @tc.desc    The type of EventInfo is null, test sendEvent() function
    *             The result of sendEvent() should be equal to a rejected promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleSendEventTest_sendEvent_asyncPromise_16400', 0, async function (done) {
      console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_16400 starts`);
  
      let windowUpdateType = 'focus';
      let jsonObj = {
        type : eventType,
        windowUpdateType : windowUpdateType,
        bundleName : bundleName,
        triggerAction : triggerAction,
      }
  
      let event = new accessibility.EventInfo(jsonObj);
      accessibility.sendEvent(event).then((result) =>{           
          console.error(`AccessibleSendEventTest:
          AccessibleSendEventTest_sendEvent_asyncPromise_16400 result ${result}`);
          expect(null).assertFail();  
          done();          
      }).catch((err) => {
          console.info(`AccessibleSendEventTest:
          AccessibleSendEventTest_sendEvent_asyncPromise_16400 has error: ${err}`);
          expect(err).assertEqual(undefined);
          done();    
      });
    })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_16500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_16500
    * @tc.desc    The windowUpdateType of EventInfo is '', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_16500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_16500 starts`);

    let windowUpdateType = '';
    let eventType = 'windowUpdate';
    let jsonObj = {
      type : eventType,
      windowUpdateType : windowUpdateType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_16500 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_16600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_16600
    * @tc.desc    The windowUpdateType of EventInfo is null, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_16600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_16600 starts`);

    let windowUpdateType = null;
    let eventType = 'windowUpdate';
    let jsonObj = {
      type : eventType,
      windowUpdateType : windowUpdateType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_16600 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_16700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_16700
    * @tc.desc    The bundleName of EventInfo is 'com.ixaa.testfora11y', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_16700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_16700 starts`);

    let localBundleName = 'com.ixaa.testfora11y';
    let jsonObj = {
      type : eventType,
      bundleName : localBundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_16700 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_16800
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_16800
    * @tc.desc    The bundleName of EventInfo is '', test sendEvent() function
    *             The result of sendEvent() should be equal to a rejected promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_16800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_16800 starts`);

    let localBundleName = '';
    let jsonObj = {
      type : eventType,
      bundleName : localBundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) =>{           
        console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_16800 result ${result}`);
        expect(null).assertFail();  
        done();          
    }).catch((err) => {
        console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_16800 has error: ${err}`);
        expect(err).assertEqual(undefined);
        done();    
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_16900
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_16900
    * @tc.desc    The bundleName of EventInfo is null, test sendEvent() function
    *             The result of sendEvent() should be equal to a rejected promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_16900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_16900 starts`);

    let localBundleName = null;
    let jsonObj = {
      type : eventType,
      bundleName : localBundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) =>{           
        console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_16900 result ${result}`);
        expect(null).assertFail();  
        done();          
    }).catch((err) => {
        console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_16900 has error: ${err}`);
        expect(err).assertEqual(undefined);
        done();    
    });
  })


  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_17000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_17000
    * @tc.desc    The componentType of EventInfo is 'button', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_17000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_17000 starts`);

    let componentType = 'button';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      componentType : componentType,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_17000 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_17100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_17100
    * @tc.desc    The componentType of EventInfo is '', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_17100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_17100 starts`);

    let componentType = '';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      componentType : componentType,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_17100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_17200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_17200
    * @tc.desc    The componentType of EventInfo is null, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_17200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_17200 starts`);

    let componentType = null;
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      componentType : componentType,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_17200 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_17300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_17300
    * @tc.desc    The pageId of EventInfo is 1, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_17300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_17300 starts`);

    let pageId = 1;
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      pageId : pageId,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_17300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_17400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_17400
    * @tc.desc    The pageId of EventInfo is 0, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_17400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_17400 starts`);

    let pageId = 0;
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      pageId : pageId,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_17400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_17500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_17500
    * @tc.desc    The pageId of EventInfo is -1, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_17500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_17500 starts`);

    let pageId = -1;
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      pageId : pageId,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_17500 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_17600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_17600
    * @tc.desc    The description of EventInfo is '1', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_17600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_17600 starts`);

    let description = '1';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      description : description,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_17600 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_17700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_17700
    * @tc.desc    The description of EventInfo is '', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_17700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_17700 starts`);

    let description = '';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      description : description,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_17700 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_17800
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_17800
    * @tc.desc    The description of EventInfo is null, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_17800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_17800 starts`);

    let description = null;
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      description : description,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_17800 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_17900
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_17900
    * @tc.desc    The triggerAction of EventInfo is 'accessibilityFocus', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_17900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_17900 starts`);

    let triggerAction = 'accessibilityFocus';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_17900 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_18000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_18000
    * @tc.desc    The triggerAction of EventInfo is 'clearAccessibilityFocus', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_18000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_18000 starts`);

    let triggerAction = 'clearAccessibilityFocus';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_18000 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_18100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_18100
    * @tc.desc    The triggerAction of EventInfo is 'focus', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_18100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_18100 starts`);

    let triggerAction = 'focus';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_18100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_18200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_18200
    * @tc.desc    The triggerAction of EventInfo is 'clearFocus', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_18200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_18200 starts`);

    let triggerAction = 'clearFocus';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_18200 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_18300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_18300
    * @tc.desc    The triggerAction of EventInfo is 'clearSelection', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_18300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_18300 starts`);

    let triggerAction = 'clearSelection';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_18300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_18400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_18400
    * @tc.desc    The triggerAction of EventInfo is 'click', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_18400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_18400 starts`);

    let triggerAction = 'click';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_18400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_18500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_18500
    * @tc.desc    The triggerAction of EventInfo is 'longClick', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_18500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_18500 starts`);

    let triggerAction = 'longClick';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_18500 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_18600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_18600
    * @tc.desc    The triggerAction of EventInfo is 'cut', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_18600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_18600 starts`);

    let triggerAction = 'cut';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_18600 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_18700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_18700
    * @tc.desc    The triggerAction of EventInfo is 'copy', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_18700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_18700 starts`);

    let triggerAction = 'copy';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_18700 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_18800
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_18800
    * @tc.desc    The triggerAction of EventInfo is 'paste', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_18800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_18800 starts`);

    let triggerAction = 'paste';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_18800 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_18900
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_18900
    * @tc.desc    The triggerAction of EventInfo is 'select', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_18900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_18900 starts`);

    let triggerAction = 'select';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_18900 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_19000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_19000
    * @tc.desc    The triggerAction of EventInfo is 'setText', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_19000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_19000 starts`);

    let triggerAction = 'setText';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_19000 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_19100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_19100
    * @tc.desc    The triggerAction of EventInfo is 'delete', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_19100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_19100 starts`);

    let triggerAction = 'delete';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_19100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_19200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_19200
    * @tc.desc    The triggerAction of EventInfo is 'scrollForward', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_19200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_19200 starts`);

    let triggerAction = 'scrollForward';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_19200 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_19300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_19300
    * @tc.desc    The triggerAction of EventInfo is 'scrollBackward', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_19300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_19300 starts`);

    let triggerAction = 'scrollBackward';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_19300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_19400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_19400
    * @tc.desc    The triggerAction of EventInfo is 'setSelection', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_19400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_19400 starts`);

    let triggerAction = 'setSelection';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_19400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_19500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_19500
    * @tc.desc    The triggerAction of EventInfo is 'unfold', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_19500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_19500 starts`);

    let triggerAction = 'unfold';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_19500 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_19600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_19600
    * @tc.desc    The triggerAction of EventInfo is 'fold', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_19600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_19600 starts`);

    let triggerAction = 'fold';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_19600 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_19700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_19700
    * @tc.desc    The triggerAction of EventInfo is 'nextText', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_19700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_19700 starts`);

    let triggerAction = 'nextText';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_19700 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_19800
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_19800
    * @tc.desc    The triggerAction of EventInfo is 'previousText', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_19800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_19800 starts`);

    let triggerAction = 'previousText';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_19800 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_19900
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_19900
    * @tc.desc    The triggerAction of EventInfo is 'nextHtmlItem', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_19900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_19900 starts`);

    let triggerAction = 'nextHtmlItem';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_19900 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_20000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_20000
    * @tc.desc    The triggerAction of EventInfo is 'previousHtmlItem', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_20000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20000 starts`);

    let triggerAction = 'previousHtmlItem';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20000 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_20100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_20100
    * @tc.desc    The triggerAction of EventInfo is '', test sendEvent() function
    *             The result of sendEvent() should be equal to a rejected promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_20100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20100 starts`);

    let triggerAction = '';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) =>{           
        console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20100 result ${result}`);
        expect(null).assertFail();  
        done();          
    }).catch((err) => {
        console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20100 has error: ${err}`);
        expect(err).assertEqual(undefined);
        done();    
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_20200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_20200
    * @tc.desc    The triggerAction of EventInfo is null, test sendEvent() function
    *             The result of sendEvent() should be equal to a rejected promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_20200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20200 starts`);

    let triggerAction = null;
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) =>{           
        console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20200 result ${result}`);
        expect(null).assertFail();  
        done();          
    }).catch((err) => {
        console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20200 has error: ${err}`);
        expect(err).assertEqual(undefined);
        done();    
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_20300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_20300
    * @tc.desc    The textMoveUnit of EventInfo is 'char', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_20300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20300 starts`);

    let textMoveUnit = 'char';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      textMoveUnit : textMoveUnit,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_20400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_20400
    * @tc.desc    The textMoveUnit of EventInfo is 'word', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_20400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20400 starts`);

    let textMoveUnit = 'word';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      textMoveUnit : textMoveUnit,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_20500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_20500
    * @tc.desc    The textMoveUnit of EventInfo is 'line', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_20500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20500 starts`);

    let textMoveUnit = 'line';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      textMoveUnit : textMoveUnit,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20500 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_20600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_20600
    * @tc.desc    The textMoveUnit of EventInfo is 'page', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_20600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20600 starts`);

    let textMoveUnit = 'page';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      textMoveUnit : textMoveUnit,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20600 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_20700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_20700
    * @tc.desc    The textMoveUnit of EventInfo is 'paragraph', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_20700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20700 starts`);

    let textMoveUnit = 'paragraph';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      textMoveUnit : textMoveUnit,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20700 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_20800
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_20800
    * @tc.desc    The textMoveUnit of EventInfo is '', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_20800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20800 starts`);

    let textMoveUnit = '';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      textMoveUnit : textMoveUnit,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20800 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_20900
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_20900
    * @tc.desc    The textMoveUnit of EventInfo is null, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_20900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20900 starts`);

    let textMoveUnit = null;
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      textMoveUnit : textMoveUnit,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_20900 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_21000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_21000
    * @tc.desc    The contents of EventInfo is ['1'], test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_21000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_21000 starts`);

    let contents = ['1'];
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      contents : contents,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_21000 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_21100
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_21100
    * @tc.desc    The contents of EventInfo is [], test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_21100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_21100 starts`);

    let contents = [];
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      contents : contents,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_21100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_21200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_21200
    * @tc.desc    The lastContent of EventInfo is '1', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_21200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_21200 starts`);

    let lastContent = '1';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      lastContent : lastContent,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_21200 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_21300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_21300
    * @tc.desc    The lastContent of EventInfo is '', test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_21300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_21300 starts`);

    let lastContent = '';
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      lastContent : lastContent,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_21300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_21400
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_21400
    * @tc.desc    The lastContent of EventInfo is null, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_21400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_21400 starts`);

    let lastContent = null;
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      lastContent : lastContent,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_21400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })


  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_21500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_21500
    * @tc.desc    The beginIndex of EventInfo is 1, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_21500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_21500 starts`);

    let beginIndex = 1;
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      beginIndex : beginIndex,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_21500 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_21600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_21600
    * @tc.desc    The beginIndex of EventInfo is 0, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_21600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_21600 starts`);

    let beginIndex = 0;
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      beginIndex : beginIndex,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_21600 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_21700
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_21700
    * @tc.desc    The beginIndex of EventInfo is -1, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_21700', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_21700 starts`);

    let beginIndex = -1;
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      beginIndex : beginIndex,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_21700 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
      * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_21800
      * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_21800
      * @tc.desc    The currentIndex of EventInfo is 1, test sendEvent() function
      *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
      * @tc.size    SmallTest
      * @tc.type    User
      */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_21800', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_21800 starts`);

    let currentIndex = 1;
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      currentIndex : currentIndex,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_21800 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_21900
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_21900
    * @tc.desc    The currentIndex of EventInfo is 0, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_21900', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_21900 starts`);

    let currentIndex = 0;
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      currentIndex : currentIndex,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_21900 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_22000
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_22000
    * @tc.desc    The currentIndex of EventInfo is -1, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_22000', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_22000 starts`);

    let currentIndex = -1;
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      currentIndex : currentIndex,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_22000 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
      * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_22100
      * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_22100
      * @tc.desc    The endIndex of EventInfo is 1, test sendEvent() function
      *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
      * @tc.size    SmallTest
      * @tc.type    User
      */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_22100', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_22100 starts`);

    let endIndex = 1;
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      endIndex : endIndex,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_22100 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_22200
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_22200
    * @tc.desc    The endIndex of EventInfo is 0, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_22200', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_22200 starts`);

    let endIndex = 0;
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      endIndex : endIndex,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_22200 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_22300
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_22300
    * @tc.desc    The endIndex of EventInfo is -1, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_22300', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_22300 starts`);

    let endIndex = -1;
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      endIndex : endIndex,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_22300 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
      * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_22400
      * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_22400
      * @tc.desc    The itemCount of EventInfo is 1, test sendEvent() function
      *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
      * @tc.size    SmallTest
      * @tc.type    User
      */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_22400', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_22400 starts`);

    let itemCount = 1;
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      itemCount : itemCount,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_22400 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_22500
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_22500
    * @tc.desc    The itemCount of EventInfo is 0, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_22500', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_22500 starts`);

    let itemCount = 0;
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      itemCount : itemCount,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_22500 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

  /*
    * @tc.number  AccessibleSendEventTest_sendEvent_asyncPromise_22600
    * @tc.name    AccessibleSendEventTest_sendEvent_asyncPromise_22600
    * @tc.desc    The itemCount of EventInfo is -1, test sendEvent() function
    *             The result of sendEvent() should be equal to a promise of undefined
    *             Another test point is to test whether the modified constructor (EventInfo)
    *             works correctly.
    * @tc.size    SmallTest
    * @tc.type    User
    */
  it('AccessibleSendEventTest_sendEvent_asyncPromise_22600', 0, async function (done) {
    console.info(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_22600 starts`);

    let itemCount = -1;
    let jsonObj = {
      type : eventType,
      bundleName : bundleName,
      triggerAction : triggerAction,
      itemCount : itemCount,
    }

    let event = new accessibility.EventInfo(jsonObj);
    accessibility.sendEvent(event).then((result) => {
      expect(result).assertEqual(undefined);
      done();
    }).catch(err => {
      console.error(`AccessibleSendEventTest: AccessibleSendEventTest_sendEvent_asyncPromise_22600 has error: ${err}`);
      expect(null).assertFail();
      done();
    });
  })

})
