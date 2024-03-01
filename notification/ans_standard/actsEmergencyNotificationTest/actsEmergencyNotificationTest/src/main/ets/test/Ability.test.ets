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

import { describe, it, afterEach, expect } from '@ohos/hypium'
import Base from '@ohos.base';
import common from '@ohos.app.ability.common';
import notification from '@ohos.notificationManager'
import notificationSubscribe from '@ohos.notificationSubscribe';

function sleep(ms: number) {
  return new Promise(resolve => setTimeout(resolve, ms));
}

let ALL_OPEN: number = 63; //  011111
let CLOSE_SOUND: number = 62; //  111110
let CLOSE_LOCKSCREEN: number = 61; //  111101
let CLOSE_BANNER: number = 59; //  111011
let CLOSE_LIGHT_SCREEN: number = 55; //  110111
let CLOSE_VIBRATION: number = 47; //  101111
let CLOSE_STATUSBAR_ICON: number = 31; //  011111
let ALL_CLOSE: number = 0; //000000

export default function abilityTest() {
  describe('ActsAbilityTest', function () {

    afterEach(async function () {
      await sleep(2000);
    })

    /*
     * @tc.number: ActsEmergencyNotificationTest_0100
     * @tc.name: Support emergency reminder type notifications
     * @tc.desc: Automatically create corresponding emergency reminder channels
     *           with prompt entry supporting full activation
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('ActsEmergencyNotificationTest_0100', 0, async function (done) {
      console.info('ActsEmergencyNotificationTest_0100 start');
      let want = {
        bundleName: 'com.example.actcemergencynotificationrely',
        abilityName: 'EntryAbility'
      };

      let publishCallback = (err: Base.BusinessError): void => {
        if (err) {
          console.error(`ActsEmergencyNotificationTest_0100 publish failed, code is ${err.code}, message is ${err.message}`);
          expect().assertFail();
          done();
        } else {
          console.info('ActsEmergencyNotificationTest_0100 publish success');
        }
      }
      let notificationRequest: notification.NotificationRequest = {
        id: 1,
        content: {
          notificationContentType: notification.ContentType.NOTIFICATION_CONTENT_BASIC_TEXT,
          normal: {
            title: "test_title",
            text: "test_text",
            additionalText: "test_additionalText"
          }
        },
        notificationSlotType: notification.SlotType.EMERGENCY_INFORMATION
      };

      globalThis.abilityContext.startAbilityForResult(want).then((data: common.AbilityResult) => {
        console.info('ActsEmergencyNotificationTest_0100 startAbilityForResult successful');
        setTimeout(() => {
          console.info('ActsEmergencyNotificationTest_0100 data is: ' + JSON.stringify(data));
          expect(data.want.parameters.NotificationSlotType).assertEqual(notification.SlotType.EMERGENCY_INFORMATION);
          expect(data.want.parameters.NotificationControlFlagStatus).assertEqual(ALL_OPEN);
          done();
        }, 3000);
      }).catch((err: Base.BusinessError) => {
        console.info('ActsEmergencyNotificationTest_0100 startAbilityForResult error is' + JSON.stringify(err));
        expect().assertFail();
        done();
      })
      await sleep(500);
      notification.publish(notificationRequest, publishCallback);
    })

    /*
     * @tc.number: ActsEmergencyNotificationTest_0200
     * @tc.name: Support emergency reminder type notifications
     * @tc.desc: The system application supports manual creation of corresponding emergency reminder channels
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('ActsEmergencyNotificationTest_0200', 0, async function (done) {
      console.info('ActsEmergencyNotificationTest_0200 start');
      let notificationSlot: notification.NotificationSlot = {
        notificationType: notification.SlotType.EMERGENCY_INFORMATION
      };

      await notification.addSlot(notification.SlotType.EMERGENCY_INFORMATION).then(() => {
        console.info("ActsEmergencyNotificationTest_0200 addSlot success");
      }).catch((err: Base.BusinessError) => {
        console.error(`ActsEmergencyNotificationTest_0200 addSlot fail: ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      });

      await notification.getSlots().then((data: Array<notification.NotificationSlot>) => {
        console.info("ActsEmergencyNotificationTest_0200 getSlots success, data: " + JSON.stringify(data));
        expect(JSON.stringify(data)).assertContain(notification.SlotType.EMERGENCY_INFORMATION);
      }).catch((err: Base.BusinessError) => {
        console.error(`ActsEmergencyNotificationTest_0200 getSlots failed, code is ${err}`);
        expect().assertFail();
        done();
      });

      await notification.removeAllSlots().then(() => {
        console.info("ActsEmergencyNotificationTest_0200 removeAllSlots success");
      }).catch((err: Base.BusinessError) => {
        console.error(`ActsEmergencyNotificationTest_0200 removeAllSlots failed, code is ${err}`);
        expect().assertFail();
        done();
      });

      await notification.addSlot(notificationSlot).then(() => {
        console.info("ActsEmergencyNotificationTest_0200 addSlot success");
      }).catch((err: Base.BusinessError) => {
        console.error(`ActsEmergencyNotificationTest_0200 addSlot fail: ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      });

      await notification.getSlots().then((data: Array<notification.NotificationSlot>) => {
        console.info("ActsEmergencyNotificationTest_0200 getSlots success, data: " + JSON.stringify(data));
        expect(JSON.stringify(data)).assertContain(notification.SlotType.EMERGENCY_INFORMATION);
        done();
      }).catch((err: Base.BusinessError) => {
        console.error(`ActsEmergencyNotificationTest_0200 getSlots failed, code is ${err}`);
        expect().assertFail();
        done();
      });
    })

    /*
     * @tc.number: ActsEmergencyNotificationTest_0300
     * @tc.name: Support emergency reminder type notifications
     * @tc.desc: Allow system applications to reduce prompt entry based on notification rules.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('ActsEmergencyNotificationTest_0300', 0, async function (done) {
      console.info('ActsEmergencyNotificationTest_0300 start')
      let want = {
        bundleName: 'com.example.actcemergencynotificationrely',
        abilityName: 'EntryAbility'
      };

      let publishCallback = (err: Base.BusinessError): void => {
        if (err) {
          console.error(`publish failed, code is ${err.code}, message is ${err.message}`);
          expect().assertFail();
          done();
        } else {
          console.info('publish success');
        }
      }
      let notificationRequest: notification.NotificationRequest = {
        id: 1,
        content: {
          notificationContentType: notification.ContentType.NOTIFICATION_CONTENT_BASIC_TEXT,
          normal: {
            title: "test_title",
            text: "test_text",
            additionalText: "test_additionalText"
          }
        },
        notificationControlFlags: notification.NotificationControlFlagStatus.NOTIFICATION_STATUS_CLOSE_SOUND,
        notificationSlotType: notification.SlotType.EMERGENCY_INFORMATION
      };
      globalThis.abilityContext.startAbilityForResult(want).then((data: common.AbilityResult) => {
        console.info('ActsEmergencyNotificationTest_0300 startAbilityForResult successful');
        setTimeout(() => {
          console.info('ActsEmergencyNotificationTest_0300 data is ' + JSON.stringify(data));
          expect(data.want.parameters.NotificationControlFlagStatus).assertEqual(CLOSE_SOUND);
          done();
        }, 3000);
      }).catch((err: Base.BusinessError) => {
        console.info('ActsEmergencyNotificationTest_0300 startAbilityForResult error is' + JSON.stringify(err));
        expect().assertFail();
        done();
      })
      await sleep(500);
      notification.publish(notificationRequest, publishCallback);
    })

    /*
     * @tc.number: ActsEmergencyNotificationTest_0400
     * @tc.name: Support emergency reminder type notifications
     * @tc.desc: Allow system applications to reduce prompt entry based on notification rules.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('ActsEmergencyNotificationTest_0400', 0, async function (done) {
      console.info('ActsEmergencyNotificationTest_0400 start')
      let want = {
        bundleName: 'com.example.actcemergencynotificationrely',
        abilityName: 'EntryAbility'
      };

      let publishCallback = (err: Base.BusinessError): void => {
        if (err) {
          console.error(`publish failed, code is ${err.code}, message is ${err.message}`);
          expect().assertFail();
          done();
        } else {
          console.info('publish success');
        }
      }
      let notificationRequest: notification.NotificationRequest = {
        id: 1,
        content: {
          notificationContentType: notification.ContentType.NOTIFICATION_CONTENT_BASIC_TEXT,
          normal: {
            title: "test_title",
            text: "test_text",
            additionalText: "test_additionalText"
          }
        },
        notificationControlFlags: notification.NotificationControlFlagStatus.NOTIFICATION_STATUS_CLOSE_VIBRATION,
        notificationSlotType: notification.SlotType.EMERGENCY_INFORMATION
      };
      globalThis.abilityContext.startAbilityForResult(want).then((data: common.AbilityResult) => {
        console.info('ActsEmergencyNotificationTest_0400 startAbilityForResult successful');
        setTimeout(() => {
          console.info('ActsEmergencyNotificationTest_0400 data is ' + JSON.stringify(data));
          expect(data.want.parameters.NotificationControlFlagStatus).assertEqual(CLOSE_VIBRATION);
          done();
        }, 3000);
      }).catch((err: Base.BusinessError) => {
        console.info('ActsEmergencyNotificationTest_0400 startAbilityForResult error is' + JSON.stringify(err));
        expect().assertFail();
        done();
      })
      await sleep(500);
      notification.publish(notificationRequest, publishCallback);
    })

    /*
     * @tc.number: ActsEmergencyNotificationTest_0500
     * @tc.name: Support emergency reminder type notifications
     * @tc.desc: Allow system applications to reduce prompt entry based on notification rules.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('ActsEmergencyNotificationTest_0500', 0, async function (done) {
      console.info('ActsEmergencyNotificationTest_0500 start')
      let want = {
        bundleName: 'com.example.actcemergencynotificationrely',
        abilityName: 'EntryAbility'
      };

      let publishCallback = (err: Base.BusinessError): void => {
        if (err) {
          console.error(`publish failed, code is ${err.code}, message is ${err.message}`);
          expect().assertFail();
          done();
        } else {
          console.info('publish success');
        }
      }
      let notificationRequest: notification.NotificationRequest = {
        id: 1,
        content: {
          notificationContentType: notification.ContentType.NOTIFICATION_CONTENT_BASIC_TEXT,
          normal: {
            title: "test_title",
            text: "test_text",
            additionalText: "test_additionalText"
          }
        },
        notificationControlFlags: notification.NotificationControlFlagStatus.NOTIFICATION_STATUS_CLOSE_BANNER,
        notificationSlotType: notification.SlotType.EMERGENCY_INFORMATION
      };
      globalThis.abilityContext.startAbilityForResult(want).then((data: common.AbilityResult) => {
        console.info('ActsEmergencyNotificationTest_0500 startAbilityForResult successful');
        setTimeout(() => {
          console.info('ActsEmergencyNotificationTest_0500 data is ' + JSON.stringify(data));
          expect(data.want.parameters.NotificationControlFlagStatus).assertEqual(CLOSE_BANNER);
          done();
        }, 3000);
      }).catch((err: Base.BusinessError) => {
        console.info('ActsEmergencyNotificationTest_0500 startAbilityForResult error is' + JSON.stringify(err));
        expect().assertFail();
        done();
      })
      await sleep(500);
      notification.publish(notificationRequest, publishCallback);
    })

    /*
     * @tc.number: ActsEmergencyNotificationTest_0600
     * @tc.name: Support emergency reminder type notifications
     * @tc.desc: Allow system applications to reduce prompt entry based on notification rules.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('ActsEmergencyNotificationTest_0600', 0, async function (done) {
      console.info('ActsEmergencyNotificationTest_0600 start')
      let want = {
        bundleName: 'com.example.actcemergencynotificationrely',
        abilityName: 'EntryAbility'
      };

      let publishCallback = (err: Base.BusinessError): void => {
        if (err) {
          console.error(`publish failed, code is ${err.code}, message is ${err.message}`);
          expect().assertFail();
          done();
        } else {
          console.info('publish success');
        }
      }
      let notificationRequest: notification.NotificationRequest = {
        id: 1,
        content: {
          notificationContentType: notification.ContentType.NOTIFICATION_CONTENT_BASIC_TEXT,
          normal: {
            title: "test_title",
            text: "test_text",
            additionalText: "test_additionalText"
          }
        },
        notificationControlFlags: notification.NotificationControlFlagStatus.NOTIFICATION_STATUS_CLOSE_LOCKSCREEN,
        notificationSlotType: notification.SlotType.EMERGENCY_INFORMATION
      };
      globalThis.abilityContext.startAbilityForResult(want).then((data: common.AbilityResult) => {
        console.info('ActsEmergencyNotificationTest_0600 startAbilityForResult successful');
        setTimeout(() => {
          console.info('ActsEmergencyNotificationTest_0600 data is ' + JSON.stringify(data));
          expect(data.want.parameters.NotificationControlFlagStatus).assertEqual(CLOSE_LOCKSCREEN);
          done();
        }, 3000);
      }).catch((err: Base.BusinessError) => {
        console.info('ActsEmergencyNotificationTest_0600 startAbilityForResult error is' + JSON.stringify(err));
        expect().assertFail();
        done();
      })
      await sleep(500);
      notification.publish(notificationRequest, publishCallback);
    })

    /*
     * @tc.number: ActsEmergencyNotificationTest_0700
     * @tc.name: Support emergency reminder type notifications
     * @tc.desc: Allow system applications to reduce prompt entry based on notification rules.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('ActsEmergencyNotificationTest_0700', 0, async function (done) {
      console.info('ActsEmergencyNotificationTest_0700 start')
      let want = {
        bundleName: 'com.example.actcemergencynotificationrely',
        abilityName: 'EntryAbility'
      };

      let publishCallback = (err: Base.BusinessError): void => {
        if (err) {
          console.error(`publish failed, code is ${err.code}, message is ${err.message}`);
          expect().assertFail();
          done();
        } else {
          console.info('publish success');
        }
      }
      let notificationRequest: notification.NotificationRequest = {
        id: 1,
        content: {
          notificationContentType: notification.ContentType.NOTIFICATION_CONTENT_BASIC_TEXT,
          normal: {
            title: "test_title",
            text: "test_text",
            additionalText: "test_additionalText"
          }
        },
        notificationControlFlags: notification.NotificationControlFlagStatus.NOTIFICATION_STATUS_CLOSE_LIGHT_SCREEN,
        notificationSlotType: notification.SlotType.EMERGENCY_INFORMATION
      };
      globalThis.abilityContext.startAbilityForResult(want).then((data: common.AbilityResult) => {
        console.info('ActsEmergencyNotificationTest_0700 startAbilityForResult successful');
        setTimeout(() => {
          console.info('ActsEmergencyNotificationTest_0700 data is ' + JSON.stringify(data));
          expect(data.want.parameters.NotificationControlFlagStatus).assertEqual(CLOSE_LIGHT_SCREEN);
          done();
        }, 3000);
      }).catch((err: Base.BusinessError) => {
        console.info('ActsEmergencyNotificationTest_0700 startAbilityForResult error is' + JSON.stringify(err));
        expect().assertFail();
        done();
      })
      await sleep(500);
      notification.publish(notificationRequest, publishCallback);
    })

    /*
     * @tc.number: ActsEmergencyNotificationTest_0800
     * @tc.name: Support emergency reminder type notifications
     * @tc.desc: Allow system applications to reduce prompt entry based on notification rules.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('ActsEmergencyNotificationTest_0800', 0, async function (done) {
      console.info('ActsEmergencyNotificationTest_0800 start')
      let want = {
        bundleName: 'com.example.actcemergencynotificationrely',
        abilityName: 'EntryAbility'
      };

      let publishCallback = (err: Base.BusinessError): void => {
        if (err) {
          console.error(`publish failed, code is ${err.code}, message is ${err.message}`);
          expect().assertFail();
          done();
        } else {
          console.info('publish success');
        }
      }
      let notificationRequest: notification.NotificationRequest = {
        id: 1,
        content: {
          notificationContentType: notification.ContentType.NOTIFICATION_CONTENT_BASIC_TEXT,
          normal: {
            title: "test_title",
            text: "test_text",
            additionalText: "test_additionalText"
          }
        },
        notificationControlFlags: notification.NotificationControlFlagStatus.NOTIFICATION_STATUS_CLOSE_STATUSBAR_ICON,
        notificationSlotType: notification.SlotType.EMERGENCY_INFORMATION
      };
      globalThis.abilityContext.startAbilityForResult(want).then((data: common.AbilityResult) => {
        console.info('ActsEmergencyNotificationTest_0800 startAbilityForResult successful');
        setTimeout(() => {
          console.info('ActsEmergencyNotificationTest_0800 data is ' + JSON.stringify(data));
          expect(data.want.parameters.NotificationControlFlagStatus).assertEqual(CLOSE_STATUSBAR_ICON);
          done();
        }, 3000);
      }).catch((err: Base.BusinessError) => {
        console.info('ActsEmergencyNotificationTest_0800 startAbilityForResult error is' + JSON.stringify(err));
        expect().assertFail();
        done();
      })
      await sleep(500);
      notification.publish(notificationRequest, publishCallback);
    })

    /*
     * @tc.number: ActsEmergencyNotificationTest_0900
     * @tc.name: Support emergency reminder type notifications
     * @tc.desc: Allow system applications to reduce prompt entry based on notification rules.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('ActsEmergencyNotificationTest_0900', 0, async function (done) {
      console.info('ActsEmergencyNotificationTest_0900 start')
      let wantFirst = {
        bundleName: 'com.example.actsemergencynotificationnormalrely',
        abilityName: 'EntryAbility',
        action: 'FirstCase'
      };

      let subscribeCallback = (err: Base.BusinessError) => {
        if (err) {
          console.error(`subscribe failed, code is ${err.code}, message is ${err.message}`);
          expect.assertFail();
          done();
        } else {
          console.info("subscribeCallback");
        }
      };

      let onConsumeCallback = (data: notificationSubscribe.SubscribeCallbackData) => {
        console.info('ActsEmergencyNotificationTest_0900 onConsume in test');
      };

      let subscriber: notificationSubscribe.NotificationSubscriber = {
        onConsume: onConsumeCallback
      };

      notificationSubscribe.subscribe(subscriber, subscribeCallback);

      globalThis.abilityContext.startAbilityForResult(wantFirst).then((data: common.AbilityResult) => {
        console.info('ActsEmergencyNotificationTest_0900 startAbilityForResult successful');
        expect(data.want.parameters.PubishErrcode).assertEqual(401);
        expect(data.want.parameters.AddSlotErrcode).assertEqual(401);
        done();
      }).catch((err: Base.BusinessError) => {
        console.info('ActsEmergencyNotificationTest_0900 startAbilityForResult error is' + JSON.stringify(err));
        expect().assertFail();
        done();
      })
    })

    /*
     * @tc.number: ActsEmergencyNotificationTest_1000
     * @tc.name: Support emergency reminder type notifications
     * @tc.desc: Allow system applications to reduce prompt entry based on notification rules.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('ActsEmergencyNotificationTest_1000', 0, async function (done) {
      console.info('ActsEmergencyNotificationTest_1000 start');
      let want = {
        bundleName: 'com.example.actcemergencynotificationrely',
        abilityName: 'EntryAbility'
      };

      let publishCallback = (err: Base.BusinessError): void => {
        if (err) {
          console.error(`ActsEmergencyNotificationTest_1000 publish failed, code is ${err.code}, message is ${err.message}`);
          expect().assertFail();
          done();
        } else {
          console.info('ActsEmergencyNotificationTest_1000 publish success');
        }
      }
      let notificationRequest: notification.NotificationRequest = {
        id: 1,
        content: {
          notificationContentType: notification.ContentType.NOTIFICATION_CONTENT_BASIC_TEXT,
          normal: {
            title: "test_title",
            text: "test_text",
            additionalText: "test_additionalText"
          }
        },
        notificationSlotType: notification.SlotType.EMERGENCY_INFORMATION,
        notificationControlFlags:
        notification.NotificationControlFlagStatus.NOTIFICATION_STATUS_CLOSE_SOUND |
        notification.NotificationControlFlagStatus.NOTIFICATION_STATUS_CLOSE_LOCKSCREEN |
        notification.NotificationControlFlagStatus.NOTIFICATION_STATUS_CLOSE_BANNER |
        notification.NotificationControlFlagStatus.NOTIFICATION_STATUS_CLOSE_LIGHT_SCREEN |
        notification.NotificationControlFlagStatus.NOTIFICATION_STATUS_CLOSE_VIBRATION |
        notification.NotificationControlFlagStatus.NOTIFICATION_STATUS_CLOSE_STATUSBAR_ICON
      };

      globalThis.abilityContext.startAbilityForResult(want).then((data: common.AbilityResult) => {
        console.info('ActsEmergencyNotificationTest_1000 startAbilityForResult successful');
        setTimeout(() => {
          console.info('ActsEmergencyNotificationTest_1000 data is: ' + JSON.stringify(data));
          expect(data.want.parameters.NotificationSlotType).assertEqual(notification.SlotType.EMERGENCY_INFORMATION);
          expect(data.want.parameters.NotificationControlFlagStatus).assertEqual(ALL_CLOSE);
          done();
        }, 3000);
      }).catch((err: Base.BusinessError) => {
        console.info('ActsEmergencyNotificationTest_1000 startAbilityForResult error is' + JSON.stringify(err));
        expect().assertFail();
        done();
      })
      await sleep(500);
      notification.publish(notificationRequest, publishCallback);
    })

    /*
     * @tc.number: ActsEmergencyNotificationTest_1100
     * @tc.name: Support emergency reminder type notifications
     * @tc.desc: Allow system applications to reduce prompt entry based on notification rules.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('ActsEmergencyNotificationTest_1100', 0, async function (done) {
      console.info('ActsEmergencyNotificationTest_1100 start')
      let wantSecond = {
        bundleName: 'com.example.actsemergencynotificationnormalrely',
        abilityName: 'EntryAbility',
        action: 'SecondCase'
      };

      let subscribeCallback = (err: Base.BusinessError) => {
        if (err) {
          console.error(`subscribe failed, code is ${err.code}, message is ${err.message}`);
          expect.assertFail();
          done();
        } else {
          console.info("subscribeCallback");
        }
      };

      let onConsumeCallback = (data: notificationSubscribe.SubscribeCallbackData) => {
        console.info('onConsume in test');
        let req = data.request;
        console.info('ActsEmergencyNotificationTest_1100  reminderFlags is :' + JSON.stringify(req.notificationFlags.reminderFlags));
        expect(req.notificationFlags.reminderFlags).assertEqual(ALL_OPEN);
        done();
      };

      let subscriber: notificationSubscribe.NotificationSubscriber = {
        onConsume: onConsumeCallback
      };

      notificationSubscribe.subscribe(subscriber, subscribeCallback);

      globalThis.abilityContext.startAbility(wantSecond).then(() => {
        console.info('ActsEmergencyNotificationTest_1100 startAbilityForResult successful');
        done();
      }).catch((err: Base.BusinessError) => {
        console.info('ActsEmergencyNotificationTest_1100 startAbilityForResult error is' + JSON.stringify(err));
        expect().assertFail();
        done();
      })
    })
  })
}