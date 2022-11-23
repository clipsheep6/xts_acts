/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
import notification from '@ohos.notification'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'

export default function HitsNotificationSlotTest() {
  describe('SUB_NOTIFICATION_ANS_SLOTS_TEST', function () {
    let TAG = 'SUB_NOTIFICATION_ANS_SLOTS_TEST ===>'
    console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST START')

    afterEach(async function (done) {
      console.info(`${TAG} afterEach START`)
      await notification.removeAllSlots((err) => {
        if (err.code) {
          console.info(`${TAG} removeAllSlots err: ${err.code}`)
          expect(false).assertTrue()
          done()
        } else {
          console.info(`${TAG} removeAllSlots success`)
          expect(true).assertTrue()
          done()
        }
      })
      console.info(`${TAG} afterEach END`)
    })

    /*
     * @tc.number    : SUB_NOTIFICATION_ANS_SLOTS_TEST_0100
     * @tc.name      : addSlot(slot: NotificationSlot, callback: AsyncCallback<void>): void
     * @tc.desc      : SlotType.UNKNOWN_TYPE & SlotLevel.LEVEL_NONE
     */
    it('SUB_NOTIFICATION_ANS_SLOTS_TEST_0100', 0, async function (done) {
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_0100 START')
      let notificationSlot = {
        type: notification.SlotType.UNKNOWN_TYPE,
        level: notification.SlotLevel.LEVEL_NONE,
        desc: 'This is UNKNOWN_TYPE',
        badgeFlag: true,
        bypassDnd: true,
        lockscreenVisibility: 1,
        vibrationEnabled: true,
        sound: 'This is sound',
        lightEnabled: true,
        lightColor: 111,
        vibrationValues: [],
        enabled: true
      }
      await notification.addSlot( notificationSlot, (err) => {
        if (err.code) {
          console.info(`${TAG} addSlot_1 AsyncCallback err: ${err.code}`)
          expect(false).assertTrue()
          done()
        } else {
          console.info(`${TAG} addSlot_1 AsyncCallback success`)
          expect(true).assertTrue()
          done()
        }
      })
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_0100 END')
    })

    /*
     * @tc.number    : SUB_NOTIFICATION_ANS_SLOTS_TEST_0200
     * @tc.name      : addSlot(slot: NotificationSlot, callback: AsyncCallback<void>): void
     * @tc.desc      : SlotType.SOCIAL_COMMUNICATION & SlotLevel.LEVEL_MIN
     */
    it('SUB_NOTIFICATION_ANS_SLOTS_TEST_0200', 0, async function (done) {
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_0200 START')
      let notificationSlot = {
        type: notification.SlotType.SOCIAL_COMMUNICATION,
        level: notification.SlotLevel.LEVEL_MIN,
        desc: 'This is SOCIAL_COMMUNICATION',
        badgeFlag: true,
        bypassDnd: true,
        lockscreenVisibility: 1,
        vibrationEnabled: true,
        sound: 'This is sound',
        lightEnabled: true,
        lightColor: 111,
        vibrationValues: [],
        enabled: true
      }
      await notification.addSlot(notificationSlot, (err) => {
        if (err.code) {
          console.info(`${TAG} addSlot_2 AsyncCallback err: ${err.code}`)
          expect(false).assertTrue()
          done()
        } else {
          console.info(`${TAG} addSlot_2 AsyncCallback success`)
          expect(true).assertTrue()
          done()
        }
      })
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_0200 END')
    })

    /*
     * @tc.number    : SUB_NOTIFICATION_ANS_SLOTS_TEST_0300
     * @tc.name      : addSlot(slot: NotificationSlot, callback: AsyncCallback<void>): void
     * @tc.desc      : SlotType.SERVICE_INFORMATION & SlotLevel.LEVEL_LOW
     */
    it('SUB_NOTIFICATION_ANS_SLOTS_TEST_0300', 0, async function (done) {
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_0300 START')
      let notificationSlot = {
        type: notification.SlotType.SERVICE_INFORMATION,
        level: notification.SlotLevel.LEVEL_LOW,
        desc: 'This is SERVICE_INFORMATION',
        badgeFlag: true,
        bypassDnd: true,
        lockscreenVisibility: 1,
        vibrationEnabled: true,
        sound: 'This is sound',
        lightEnabled: true,
        lightColor: 111,
        vibrationValues: [],
        enabled: true
      }
      await notification.addSlot(notificationSlot, (err) => {
        if (err.code) {
          console.info(`${TAG} addSlot_3 AsyncCallback err: ${err.code}`)
          expect(false).assertTrue()
          done()
        } else {
          console.info(`${TAG} addSlot_3 AsyncCallback success`)
          expect(true).assertTrue()
          done()
        }
      })
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_0300 END')
    })

    /*
     * @tc.number    : SUB_NOTIFICATION_ANS_SLOTS_TEST_0400
     * @tc.name      : addSlot(slot: NotificationSlot, callback: AsyncCallback<void>): void
     * @tc.desc      : SlotType.CONTENT_INFORMATION & SlotLevel.LEVEL_DEFAULT
     */
    it('SUB_NOTIFICATION_ANS_SLOTS_TEST_0400', 0, async function (done) {
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_0400 START')
      let notificationSlot = {
        type: notification.SlotType.CONTENT_INFORMATION,
        level: notification.SlotLevel.LEVEL_DEFAULT,
        desc: 'This is CONTENT_INFORMATION',
        badgeFlag: true,
        bypassDnd: true,
        lockscreenVisibility: 1,
        vibrationEnabled: true,
        sound: 'This is sound',
        lightEnabled: true,
        lightColor: 111,
        vibrationValues: [],
        enabled: true
      }
      await notification.addSlot(notificationSlot, (err) => {
        if (err.code) {
          console.info(`${TAG} addSlot_4 AsyncCallback err: ${err.code}`)
          expect(false).assertTrue()
          done()
        } else {
          console.info(`${TAG} addSlot_4 AsyncCallback success`)
          expect(true).assertTrue()
          done()
        }
      })
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_0400 END')
    })

    /*
     * @tc.number    : SUB_NOTIFICATION_ANS_SLOTS_TEST_0500
     * @tc.name      : addSlot(slot: NotificationSlot, callback: AsyncCallback<void>): void
     * @tc.desc      : SlotType.OTHER_TYPES & SlotLevel.LEVEL_HIGH
     */
    it('SUB_NOTIFICATION_ANS_SLOTS_TEST_0500', 0, async function (done) {
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_0500 START')
      let notificationSlot = {
        type: notification.SlotType.OTHER_TYPES,
        level: notification.SlotLevel.LEVEL_HIGH,
        desc: 'This is OTHER_TYPES',
        badgeFlag: true,
        bypassDnd: true,
        lockscreenVisibility: 1,
        vibrationEnabled: true,
        sound: 'This is sound',
        lightEnabled: true,
        lightColor: 111,
        vibrationValues: [],
        enabled: true
      }
      await notification.addSlot(notificationSlot, (err) => {
        if (err.code) {
          console.info(`${TAG} addSlot_5 AsyncCallback err: ${err.code}`)
          expect(false).assertTrue()
          done()
        } else {
          console.info(`${TAG} addSlot_5 AsyncCallback success`)
          expect(true).assertTrue()
          done()
        }
      })
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_0500 END')
    })

    /*
     * @tc.number    : SUB_NOTIFICATION_ANS_SLOTS_TEST_0600
     * @tc.name      : addSlot(slot: NotificationSlot): Promise<void>
     * @tc.desc      : SlotType.UNKNOWN_TYPE & SlotLevel.LEVEL_NONE
     */
    it('SUB_NOTIFICATION_ANS_SLOTS_TEST_0600', 0, async function (done) {
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_0600 START')
      let notificationSlot = {
        type: notification.SlotType.UNKNOWN_TYPE,
        level: notification.SlotLevel.LEVEL_NONE,
        desc: 'This is UNKNOWN_TYPE',
        badgeFlag: true,
        bypassDnd: true,
        lockscreenVisibility: 1,
        vibrationEnabled: true,
        sound: 'This is sound',
        lightEnabled: true,
        lightColor: 111,
        vibrationValues: [],
        enabled: true
      }
      await notification.addSlot(notificationSlot).then(() => {
        console.info(`${TAG} addSlot_6 Promise success`)
        expect(true).assertTrue()
        done()
      }).catch((err) => {
        console.info(`${TAG} addSlot_6 Promise err: ${err.code}`)
        expect(false).assertTrue()
        done()
      })
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_0600 END')
    })

    /*
     * @tc.number    : SUB_NOTIFICATION_ANS_SLOTS_TEST_0700
     * @tc.name      : addSlot(slot: NotificationSlot): Promise<void>
     * @tc.desc      : SlotType.SOCIAL_COMMUNICATION & SlotLevel.LEVEL_MIN
     */
    it('SUB_NOTIFICATION_ANS_SLOTS_TEST_0700', 0, async function (done) {
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_0700 START')
      let notificationSlot = {
        type: notification.SlotType.SOCIAL_COMMUNICATION,
        level: notification.SlotLevel.LEVEL_MIN,
        desc: 'This is SOCIAL_COMMUNICATION',
        badgeFlag: true,
        bypassDnd: true,
        lockscreenVisibility: 1,
        vibrationEnabled: true,
        sound: 'This is sound',
        lightEnabled: true,
        lightColor: 111,
        vibrationValues: [],
        enabled: true
      }
      await notification.addSlot(notificationSlot).then(() => {
        console.info(`${TAG} addSlot_7 Promise success`)
        expect(true).assertTrue()
        done()
      }).catch((err) => {
        console.info(`${TAG} addSlot_7 Promise err: ${err.code}`)
        expect(false).assertTrue()
        done()
      })
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_0700 END')
    })

    /*
     * @tc.number    : SUB_NOTIFICATION_ANS_SLOTS_TEST_0800
     * @tc.name      : aaddSlot(slot: NotificationSlot): Promise<void>
     * @tc.desc      : SlotType.SERVICE_INFORMATION & SlotLevel.LEVEL_LOW
     */
    it('SUB_NOTIFICATION_ANS_SLOTS_TEST_0800', 0, async function (done) {
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_0800 START')
      let notificationSlot = {
        type: notification.SlotType.SERVICE_INFORMATION,
        level: notification.SlotLevel.LEVEL_LOW,
        desc: 'This is SERVICE_INFORMATION',
        badgeFlag: true,
        bypassDnd: true,
        lockscreenVisibility: 1,
        vibrationEnabled: true,
        sound: 'This is sound',
        lightEnabled: true,
        lightColor: 111,
        vibrationValues: [],
        enabled: true
      }
      await notification.addSlot(notificationSlot).then(() => {
        console.info(`${TAG} addSlot_8 Promise success`)
        expect(true).assertTrue()
        done()
      }).catch((err) => {
        console.info(`${TAG} addSlot_8 Promise err: ${err.code}`)
        expect(false).assertTrue()
        done()
      })
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_0800 END')
    })

    /*
     * @tc.number    : SUB_NOTIFICATION_ANS_SLOTS_TEST_0900
     * @tc.name      : addSlot(slot: NotificationSlot): Promise<void>
     * @tc.desc      : SlotType.CONTENT_INFORMATION & SlotLevel.LEVEL_DEFAULT
     */
    it('SUB_NOTIFICATION_ANS_SLOTS_TEST_0900', 0, async function (done) {
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_0900 START')
      let notificationSlot = {
        type: notification.SlotType.CONTENT_INFORMATION,
        level: notification.SlotLevel.LEVEL_DEFAULT,
        desc: 'This is CONTENT_INFORMATION',
        badgeFlag: true,
        bypassDnd: true,
        lockscreenVisibility: 1,
        vibrationEnabled: true,
        sound: 'This is sound',
        lightEnabled: true,
        lightColor: 111,
        vibrationValues: [],
        enabled: true
      }
      await notification.addSlot(notificationSlot).then(() => {
        console.info(`${TAG} addSlot_9 Promise success`)
        expect(true).assertTrue()
        done()
      }).catch((err) => {
        console.info(`${TAG} addSlot_9 Promise err: ${err.code}`)
        expect(false).assertTrue()
        done()
      })
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_0900 END')
    })

    /*
     * @tc.number    : SUB_NOTIFICATION_ANS_SLOTS_TEST_1000
     * @tc.name      : addSlot(slot: NotificationSlot): Promise<void>
     * @tc.desc      : SlotType.OTHER_TYPES & SlotLevel.LEVEL_HIGH
     */
    it('SUB_NOTIFICATION_ANS_SLOTS_TEST_1000', 0, async function (done) {
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_1000 START')
      let notificationSlot = {
        type: notification.SlotType.OTHER_TYPES,
        level: notification.SlotLevel.LEVEL_HIGH,
        desc: 'This is OTHER_TYPES',
        badgeFlag: true,
        bypassDnd: true,
        lockscreenVisibility: 1,
        vibrationEnabled: true,
        sound: 'This is sound',
        lightEnabled: true,
        lightColor: 111,
        vibrationValues: [],
        enabled: true
      }
      await notification.addSlot(notificationSlot).then(() => {
        console.info(`${TAG} addSlot_10 Promise success`)
        expect(true).assertTrue()
        done()
      }).catch((err) => {
        console.info(`${TAG} addSlot_10 Promise err: ${err.code}`)
        expect(false).assertTrue()
        done()
      })
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_1000 END')
    })

    /*
     * @tc.number    : SUB_NOTIFICATION_ANS_SLOTS_TEST_1100
     * @tc.name      : addSlots(slots: Array<NotificationSlot>, callback: AsyncCallback<void>): void
     * @tc.desc      : SlotType.UNKNOWN_TYPE & SlotLevel.LEVEL_NONE
     */
    it('SUB_NOTIFICATION_ANS_SLOTS_TEST_1100', 0, async function (done) {
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_1100 START')
      let notificationSlot = {
        type: notification.SlotType.UNKNOWN_TYPE,
        level: notification.SlotLevel.LEVEL_NONE,
        desc: 'This is UNKNOWN_TYPE',
        badgeFlag: true,
        bypassDnd: true,
        lockscreenVisibility: 1,
        vibrationEnabled: true,
        sound: 'This is sound',
        lightEnabled: true,
        lightColor: 111,
        vibrationValues: [],
        enabled: true
      }
      let notificationArr = new Array()
      notificationArr[0] = notificationSlot
      await notification.addSlots(notificationArr, (err) => {
        if (err.code) {
          console.info(`${TAG} addSlots_1 AsyncCallback err: ${err.code}`)
          expect(true).assertTrue()
          done()
        } else {
          console.info(`${TAG} addSlots_1 AsyncCallback success`)
          expect(false).assertTrue()
          done()
        }
      })
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_1100 END')
    })

    /*
     * @tc.number    : SUB_NOTIFICATION_ANS_SLOTS_TEST_1200
     * @tc.name      : addSlots(slots: Array<NotificationSlot>, callback: AsyncCallback<void>): void
     * @tc.desc      : SlotType.SOCIAL_COMMUNICATION & SlotLevel.LEVEL_MIN
     */
    it('SUB_NOTIFICATION_ANS_SLOTS_TEST_1200', 0, async function (done) {
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_1200 START')
      let notificationSlot = {
        type: notification.SlotType.SOCIAL_COMMUNICATION,
        level: notification.SlotLevel.LEVEL_MIN,
        desc: 'This is UNKNOWN_TYPE',
        badgeFlag: true,
        bypassDnd: true,
        lockscreenVisibility: 1,
        vibrationEnabled: true,
        sound: 'This is sound',
        lightEnabled: true,
        lightColor: 111,
        vibrationValues: [],
        enabled: true
      }
      let notificationArr = new Array()
      notificationArr[0] = notificationSlot
      await notification.addSlots(notificationArr, (err) => {
        if (err.code) {
          console.info(`${TAG} addSlots_2 AsyncCallback err: ${err.code}`)
          expect(true).assertTrue()
          done()
        } else {
          console.info(`${TAG} addSlots_2 AsyncCallback success`)
          expect(false).assertTrue()
          done()
        }
      })
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_1200 END')
    })

    /*
     * @tc.number    : SUB_NOTIFICATION_ANS_SLOTS_TEST_1300
     * @tc.name      : addSlots(slots: Array<NotificationSlot>, callback: AsyncCallback<void>): void
     * @tc.desc      : SlotType.SERVICE_INFORMATION & SlotLevel.LEVEL_LOW
     */
    it('SUB_NOTIFICATION_ANS_SLOTS_TEST_1300', 0, async function (done) {
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_1300 START')
      let notificationSlot = {
        type: notification.SlotType.SERVICE_INFORMATION,
        level: notification.SlotLevel.LEVEL_LOW,
        desc: 'This is UNKNOWN_TYPE',
        badgeFlag: true,
        bypassDnd: true,
        lockscreenVisibility: 1,
        vibrationEnabled: true,
        sound: 'This is sound',
        lightEnabled: true,
        lightColor: 111,
        vibrationValues: [],
        enabled: true
      }
      let notificationArr = new Array()
      notificationArr[0] = notificationSlot
      await notification.addSlots(notificationArr, (err) => {
        if (err.code) {
          console.info(`${TAG} addSlots_3 AsyncCallback err: ${err.code}`)
          expect(true).assertTrue()
          done()
        } else {
          console.info(`${TAG} addSlots_3 AsyncCallback success`)
          expect(false).assertTrue()
          done()
        }
      })
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_1300 END')
    })

    /*
     * @tc.number    : SUB_NOTIFICATION_ANS_SLOTS_TEST_1400
     * @tc.name      : addSlots(slots: Array<NotificationSlot>, callback: AsyncCallback<void>): void
     * @tc.desc      : SlotType.CONTENT_INFORMATION & SlotLevel.LEVEL_DEFAULT
     */
    it('SUB_NOTIFICATION_ANS_SLOTS_TEST_1400', 0, async function (done) {
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_1400 START')
      let notificationSlot = {
        type: notification.SlotType.CONTENT_INFORMATION,
        level: notification.SlotLevel.LEVEL_DEFAULT,
        desc: 'This is UNKNOWN_TYPE',
        badgeFlag: true,
        bypassDnd: true,
        lockscreenVisibility: 1,
        vibrationEnabled: true,
        sound: 'This is sound',
        lightEnabled: true,
        lightColor: 111,
        vibrationValues: [],
        enabled: true
      }
      let notificationArr = new Array()
      notificationArr[0] = notificationSlot
      await notification.addSlots(notificationArr, (err) => {
        if (err.code) {
          console.info(`${TAG} addSlots_4 AsyncCallback err: ${err.code}`)
          expect(true).assertTrue()
          done()
        } else {
          console.info(`${TAG} addSlots_4 AsyncCallback success`)
          expect(false).assertTrue()
          done()
        }
      })
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_1400 END')
    })

    /*
     * @tc.number    : SUB_NOTIFICATION_ANS_SLOTS_TEST_1500
     * @tc.name      : addSlots(slots: Array<NotificationSlot>, callback: AsyncCallback<void>): void
     * @tc.desc      : SlotType.OTHER_TYPES & SlotLevel.LEVEL_HIGH
     */
    it('SUB_NOTIFICATION_ANS_SLOTS_TEST_1500', 0, async function (done) {
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_1500 START')
      let notificationSlot = {
        type: notification.SlotType.OTHER_TYPES,
        level: notification.SlotLevel.LEVEL_HIGH,
        desc: 'This is UNKNOWN_TYPE',
        badgeFlag: true,
        bypassDnd: true,
        lockscreenVisibility: 1,
        vibrationEnabled: true,
        sound: 'This is sound',
        lightEnabled: true,
        lightColor: 111,
        vibrationValues: [],
        enabled: true
      }
      let notificationArr = new Array()
      notificationArr[0] = notificationSlot
      await notification.addSlots(notificationArr, (err) => {
        if (err.code) {
          console.info(`${TAG} addSlots_5 AsyncCallback err: ${err.code}`)
          expect(true).assertTrue()
          done()
        } else {
          console.info(`${TAG} addSlots_5 AsyncCallback success`)
          expect(false).assertTrue()
          done()
        }
      })
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_1500 END')
    })

    /*
     * @tc.number    : SUB_NOTIFICATION_ANS_SLOTS_TEST_1600
     * @tc.name      : addSlots(slots: Array<NotificationSlot>): Promise<void>
     * @tc.desc      : SlotType.UNKNOWN_TYPE & SlotLevel.LEVEL_NONE
     */
    it('SUB_NOTIFICATION_ANS_SLOTS_TEST_1600', 0, async function (done) {
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_1600 START')
      let notificationSlot = {
        type: notification.SlotType.UNKNOWN_TYPE,
        level: notification.SlotLevel.LEVEL_NONE,
        desc: 'This is UNKNOWN_TYPE',
        badgeFlag: true,
        bypassDnd: true,
        lockscreenVisibility: 1,
        vibrationEnabled: true,
        sound: 'This is sound',
        lightEnabled: true,
        lightColor: 111,
        vibrationValues: [],
        enabled: true
      }
      let notificationArr = new Array()
      notificationArr[0] = notificationSlot
      await notification.addSlots(notificationArr).then(() => {
        console.info(`${TAG} addSlots_6 Promise success`)
        expect(false).assertTrue()
        done()
      }).catch((err) => {
        console.info(`${TAG} addSlots_6 Promise err: ${err.code}`)
        expect(true).assertTrue()
        done()
      })
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_1600 END')
    })

    /*
     * @tc.number    : SUB_NOTIFICATION_ANS_SLOTS_TEST_1700
     * @tc.name      : addSlots(slots: Array<NotificationSlot>): Promise<void>
     * @tc.desc      : SlotType.SOCIAL_COMMUNICATION & SlotLevel.LEVEL_MIN
     */
    it('SUB_NOTIFICATION_ANS_SLOTS_TEST_1700', 0, async function (done) {
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_1700 START')
      let notificationSlot = {
        type: notification.SlotType.SOCIAL_COMMUNICATION,
        level: notification.SlotLevel.LEVEL_MIN,
        desc: 'This is UNKNOWN_TYPE',
        badgeFlag: true,
        bypassDnd: true,
        lockscreenVisibility: 1,
        vibrationEnabled: true,
        sound: 'This is sound',
        lightEnabled: true,
        lightColor: 111,
        vibrationValues: [],
        enabled: true
      }
      let notificationArr = new Array()
      notificationArr[0] = notificationSlot
      await notification.addSlots(notificationArr).then(() => {
        console.info(`${TAG} addSlots_7 Promise success`)
        expect(false).assertTrue()
        done()
      }).catch((err) => {
        console.info(`${TAG} addSlots_7 Promise err: ${err.code}`)
        expect(true).assertTrue()
        done()
      })
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_1700 END')
    })

    /*
     * @tc.number    : SUB_NOTIFICATION_ANS_SLOTS_TEST_1800
     * @tc.name      : addSlots(slots: Array<NotificationSlot>): Promise<void>
     * @tc.desc      : SlotType.SERVICE_INFORMATION & SlotLevel.LEVEL_LOW
     */
    it('SUB_NOTIFICATION_ANS_SLOTS_TEST_1800', 0, async function (done) {
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_1800 START')
      let notificationSlot = {
        type: notification.SlotType.SERVICE_INFORMATION,
        level: notification.SlotLevel.LEVEL_LOW,
        desc: 'This is UNKNOWN_TYPE',
        badgeFlag: true,
        bypassDnd: true,
        lockscreenVisibility: 1,
        vibrationEnabled: true,
        sound: 'This is sound',
        lightEnabled: true,
        lightColor: 111,
        vibrationValues: [],
        enabled: true
      }
      let notificationArr = new Array()
      notificationArr[0] = notificationSlot
      await notification.addSlots(notificationArr).then(() => {
        console.info(`${TAG} addSlots_8 Promise success`)
        expect(false).assertTrue()
        done()
      }).catch((err) => {
        console.info(`${TAG} addSlots_8 Promise err: ${err.code}`)
        expect(true).assertTrue()
        done()
      })
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_1800 END')
    })

    /*
     * @tc.number    : SUB_NOTIFICATION_ANS_SLOTS_TEST_1900
     * @tc.name      : addSlots(slots: Array<NotificationSlot>): Promise<void>
     * @tc.desc      : SlotType.CONTENT_INFORMATION & SlotLevel.LEVEL_DEFAULT
     */
    it('SUB_NOTIFICATION_ANS_SLOTS_TEST_1900', 0, async function (done) {
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_1900 START')
      let notificationSlot = {
        type: notification.SlotType.CONTENT_INFORMATION,
        level: notification.SlotLevel.LEVEL_DEFAULT,
        desc: 'This is UNKNOWN_TYPE',
        badgeFlag: true,
        bypassDnd: true,
        lockscreenVisibility: 1,
        vibrationEnabled: true,
        sound: 'This is sound',
        lightEnabled: true,
        lightColor: 111,
        vibrationValues: [],
        enabled: true
      }
      let notificationArr = new Array()
      notificationArr[0] = notificationSlot
      await notification.addSlots(notificationArr).then(() => {
        console.info(`${TAG} addSlots_9 Promise success`)
        expect(false).assertTrue()
        done()
      }).catch((err) => {
        console.info(`${TAG} addSlots_9 Promise err: ${err.code}`)
        expect(true).assertTrue()
        done()
      })
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_1900 END')
    })

    /*
     * @tc.number    : SUB_NOTIFICATION_ANS_SLOTS_TEST_2000
     * @tc.name      : addSlots(slots: Array<NotificationSlot>): Promise<void>
     * @tc.desc      : SlotType.OTHER_TYPES & SlotLevel.LEVEL_HIGH
     */
    it('SUB_NOTIFICATION_ANS_SLOTS_TEST_2000', 0, async function (done) {
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_2000 START')
      let notificationSlot = {
        type: notification.SlotType.OTHER_TYPES,
        level: notification.SlotLevel.LEVEL_HIGH,
        desc: 'This is UNKNOWN_TYPE',
        badgeFlag: true,
        bypassDnd: true,
        lockscreenVisibility: 1,
        vibrationEnabled: true,
        sound: 'This is sound',
        lightEnabled: true,
        lightColor: 111,
        vibrationValues: [],
        enabled: true
      }
      let notificationArr = new Array()
      notificationArr[0] = notificationSlot
      await notification.addSlots(notificationArr).then(() => {
        console.info(`${TAG} addSlots_10 Promise success`)
        expect(false).assertTrue()
        done()
      }).catch((err) => {
        console.info(`${TAG} addSlots_10 Promise err: ${err.code}`)
        expect(true).assertTrue()
        done()
      })
      console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST_2000 END')
    })

    console.info(TAG + 'SUB_NOTIFICATION_ANS_SLOTS_TEST END')
  })
}
