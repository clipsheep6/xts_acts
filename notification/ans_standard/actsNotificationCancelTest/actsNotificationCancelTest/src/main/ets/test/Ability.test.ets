/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
import notificationManager from '@ohos.notificationManager';
import Base from '@ohos.base';
import common from '@ohos.app.ability.common';

function sleep(ms: number) {
  return new Promise(resolve => setTimeout(resolve, ms));
}

export default function abilityTest() {
  describe('ActsAbilityTest', function () {

    /*
     * @tc.number: Acts_NotificationCancel_0100
     * @tc.name: Cancel notification with param is invilad .
     * @tc.desc: Input invilad param cannot cancel notifications, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Acts_NotificationCancel_0100', 0, async function (done) {
      console.info("Acts_NotificationCancel_0100 start");

      var representativeBundle: notificationManager.BundleOption = null;
      let publishCallback = (err: Base.BusinessError): void => {
        if (err) {
          console.error(`Acts_NotificationCancel_0100 publish failed, code is ${err.code}, message is ${err.message}`);
          expect().assertFail();
          done();
        } else {
          console.info('Acts_NotificationCancel_0100 publish success');
        }
      }

      let notificationRequest: notificationManager.NotificationRequest = {
        id: 1024,
        content: {
          notificationContentType: notificationManager.ContentType.NOTIFICATION_CONTENT_BASIC_TEXT,
          normal: {
            title: "test_title",
            text: "test_text",
            additionalText: "test_additionalText"
          }
        }
      };
      notificationManager.publish(notificationRequest, publishCallback);
      await sleep(1000);

      // Cancel when representativeBundle is null, return 401.
      try {
        await notificationManager.cancel(representativeBundle, 1024).then(() => {
          console.info('Acts_NotificationCancel_0100 cancel successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          console.info('Acts_NotificationCancel_0100 cancel errorcode is' + JSON.stringify(err.code));
          expect(err.code).assertEqual(401);
        })
      } catch (errCode) {
        console.info('Acts_NotificationCancel_0100 cancel err is : ' + JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
      }

      // Cancel when representativeBundle is undefined, return 401.
      var representativeBundle: notificationManager.BundleOption = undefined;
      try {
        await notificationManager.cancel(representativeBundle, 1024).then(() => {
          console.info('Acts_NotificationCancel_0100 cancel2 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          console.info('Acts_NotificationCancel_0100 cancel2 errorcode is' + JSON.stringify(err.code));
          expect(err.code).assertEqual(401);
        })
      } catch (errCode) {
        console.info('Acts_NotificationCancel_0100 cancel2 err is : ' + JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
      }

      // Cancel when the bundle in representativeBundle is undefined, return 401.
      var representativeBundle: notificationManager.BundleOption = {
        bundle: null
      };
      try {
        await notificationManager.cancel(representativeBundle, 1024).then(() => {
          console.info('Acts_NotificationCancel_0100 cancel3 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          console.info('Acts_NotificationCancel_0100 cancel3 errorcode is' + JSON.stringify(err.code));
          expect(err.code).assertEqual(401);
        })
      } catch (errCode) {
        console.info('Acts_NotificationCancel_0100 cancel3 err is : ' + JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
      }

      // Cancel when the bundle in representativeBundle is empty string, return 401.
      var representativeBundle: notificationManager.BundleOption = {
        bundle: ""
      };
      try {
        await notificationManager.cancel(representativeBundle, 1024).then(() => {
          console.info('Acts_NotificationCancel_0100 cancel4 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          console.info('Acts_NotificationCancel_0100 cancel4 errorcode is' + JSON.stringify(err.code));
          expect(err.code).assertEqual(1600017);
        })
      } catch (errCode) {
        console.info('Acts_NotificationCancel_0100 cancel4 err is : ' + JSON.stringify(errCode));
        expect(errCode.code).assertEqual(1600017);
      }

      // Cancel when the bundle in representativeBundle isn't exist, return 401.
      var representativeBundle: notificationManager.BundleOption = {
        bundle: "com.example.51522zzwlwlbb"
      };
      try {
        await notificationManager.cancel(representativeBundle, 1024).then(() => {
          console.info('Acts_NotificationCancel_0100 cancel5 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          console.info('Acts_NotificationCancel_0100 cancel5 errorcode is' + JSON.stringify(err.code));
          expect(err.code).assertEqual(1600017);
        })
      } catch (errCode) {
        console.info('Acts_NotificationCancel_0100 cancel5 err is : ' + JSON.stringify(errCode));
        expect(errCode.code).assertEqual(1600017);
      }

      // Cancel when the id is null, return 401.
      var representativeBundle: notificationManager.BundleOption = {
        bundle: "com.example.actsnotificationcancelasbundletest"
      };
      try {
        await notificationManager.cancel(representativeBundle, null).then(() => {
          console.info('Acts_NotificationCancel_0100 cancel6 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          console.info('Acts_NotificationCancel_0100 cancel6 errorcode is' + JSON.stringify(err.code));
          expect(err.code).assertEqual(401);
        })
      } catch (errCode) {
        console.info('Acts_NotificationCancel_0100 cancel6 err is : ' + JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
      }

      // Cancel when the id is null, return 401.
      var representativeBundle: notificationManager.BundleOption = {
        bundle: "com.example.actsnotificationcancelasbundletest"
      };
      try {
        await notificationManager.cancel(representativeBundle, undefined).then(() => {
          console.info('Acts_NotificationCancel_0100 cancel7 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          console.info('Acts_NotificationCancel_0100 cancel7 errorcode is' + JSON.stringify(err.code));
          expect(err.code).assertEqual(401);
        })
      } catch (errCode) {
        console.info('Acts_NotificationCancel_0100 cancel7 err is : ' + JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
      }

      // Cancel when the id is null, return 401.
      var representativeBundle: notificationManager.BundleOption = {
        bundle: "com.example.actsnotificationcancelasbundletest"
      };
      try {
        await notificationManager.cancel(representativeBundle, null).then(() => {
          console.info('Acts_NotificationCancel_0100 cancel8 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          console.info('Acts_NotificationCancel_0100 cancel8 errorcode is' + JSON.stringify(err.code));
          expect(err.code).assertEqual(401);
        })
      } catch (errCode) {
        console.info('Acts_NotificationCancel_0100 cancel8 err is : ' + JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
      }

      // Cancel when the id is undefined, return 401.
      var representativeBundle: notificationManager.BundleOption = {
        bundle: "com.example.actsnotificationcancelasbundletest"
      };
      try {
        await notificationManager.cancel(representativeBundle, undefined).then(() => {
          console.info('Acts_NotificationCancel_0100 cancel9 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          console.info('Acts_NotificationCancel_0100 cancel9 errorcode is' + JSON.stringify(err.code));
          expect(err.code).assertEqual(401);
          done();
        })
      } catch (errCode) {
        console.info('Acts_NotificationCancel_0100 cancel9 err is : ' + JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number: Acts_NotificationCancel_0200
     * @tc.name: Cancel notification with id isn't exsit .
     * @tc.desc: Cannot cancel notification when the id isn't exsit, return 1600007.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Acts_NotificationCancel_0200', 0, async function (done) {
      console.info('Acts_NotificationCancel_0200 start');

      let publishCallback = (err: Base.BusinessError): void => {
        if (err) {
          console.error(`Acts_NotificationCancel_0200 publish failed, code is ${err.code}, message is ${err.message}`);
          expect().assertFail();
          done();
        } else {
          console.info('Acts_NotificationCancel_0200 publish success');
        }
      }

      let notificationRequest: notificationManager.NotificationRequest = {
        id: 1024,
        content: {
          notificationContentType: notificationManager.ContentType.NOTIFICATION_CONTENT_BASIC_TEXT,
          normal: {
            title: "test_title",
            text: "test_text",
            additionalText: "test_additionalText"
          }
        }
      };
      notificationManager.publish(notificationRequest, publishCallback);
      await sleep(1000);

      var representativeBundle: notificationManager.BundleOption = {
        bundle: "com.example.actsnotificationcancelasbundletest"
      };
      try {
        await notificationManager.cancel(representativeBundle, 51522).then(() => {
          console.info('Acts_NotificationCancel_0200 cancel successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          console.info('Acts_NotificationCancel_0200 cancel errorcode is' + JSON.stringify(err.code));
          expect(err.code).assertEqual(1600017);
          done();
        })
      } catch (errCode) {
        console.info('Acts_NotificationCancel_0200 cancel err is : ' + JSON.stringify(errCode));
        expect(errCode.code).assertEqual(1600017);
        done();
      }
    })

    /*
     * @tc.number: Acts_NotificationCancel_0300
     * @tc.name: Cancel notification by the app isn't system.
     * @tc.desc: Cannot cancel notification when the app isn't system, return 202.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Acts_NotificationCancel_0300', 0, async function (done) {
      console.info('Acts_NotificationCancel_0300 start');
      let want = {
        bundleName: "com.example.actsnotificationcancelasbundlenormalrely",
        abilityName: "EntryAbility"
      }
      let publishCallback = (err: Base.BusinessError): void => {
        if (err) {
          console.error(`Acts_NotificationCancel_0300 publish failed, code is ${err.code}, message is ${err.message}`);
          expect().assertFail();
          done();
        } else {
          console.info('Acts_NotificationCancel_0300 publish success');
        }
      }

      let notificationRequest: notificationManager.NotificationRequest = {
        id: 202,
        content: {
          notificationContentType: notificationManager.ContentType.NOTIFICATION_CONTENT_BASIC_TEXT,
          normal: {
            title: "test_title",
            text: "test_text",
            additionalText: "test_additionalText"
          }
        }
      };
      notificationManager.publish(notificationRequest, publishCallback);
      await sleep(1000);

      await globalThis.abilityContext.startAbilityForResult(want).then((data: common.AbilityResult) => {
        console.info("Acts_NotificationCancel_0300 startAbilityForResult successful");
        setTimeout(() => {
          console.info("Acts_NotificationCancel_0300 data is " + JSON.stringify(data));
          expect(data.want.parameters.ErrCode).assertEqual(202);
          done();
        }, 3000);
      }).catch((err) => {
        console.log("Acts_NotificationCancel_0300 startAbilityForResult error is" + JSON.stringify(err));
        expect().assertFail();
        done();
      })
    })
  })
}