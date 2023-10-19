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
import CommonEventManager from '@ohos.commonEventManager'
import notificationManager from '@ohos.notificationManager'

const CASE_TIME_OUT = 5000;
var Acts_PushCheck = {
  events: ['ACTS_PUBLISH_NOTIFICATION_EVENT']
}
const BUNDLE = {
  bundle : "com.example.pushcheckpublisher"
}
const BUNDLE_SEC = {
  bundle : "com.example.pushcheckpublishersystem"
}
export default function abilityTest() {
  describe('ActsPushCheckTest', function () {
    beforeAll(async (done) => {
      notificationManager.setNotificationEnable(BUNDLE, true, (err) =>{
        console.info(`====>beforeAll first setNotificationEnable err: ${JSON.stringify(err)}`);
        notificationManager.setNotificationEnable(BUNDLE_SEC, true, (err) =>{
          console.info(`====>beforeAll second setNotificationEnable err: ${JSON.stringify(err)}`);
          done()
        })
      })
    })

    afterEach(async (done) => {
      setTimeout(function () {
        console.info('====>afterEach called')
        done()
      }, 1000);
    })

    /*
     * @tc.number: Acts_PushCheck_0100
     * @tc.name: Integration of local and remote notification experience
     * @tc.desc: system applications with permissions, call the on method.
     */
    it('Acts_PushCheck_0100',0, async function (done) {
      var subscriber;
      var flag = false;
      console.info('====>Acts_PushCheck_0100 start');
      CommonEventManager.createSubscriber(Acts_PushCheck).then(async (data) => {
        console.info('====>Acts_PushCheck_0100 Create Subscribe');
        subscriber = data;
        CommonEventManager.subscribe(subscriber, subscribeCallBack);
        try{
          notificationManager.on("checkNotification", OnCheckNotification);
          console.info(`====>Acts_PushCheck_0100 notificationManager.on end`);
        } catch (error){
          expect().assertFail()
          console.info(`====>Acts_PushCheck_0100 notificationManager.on error: ${JSON.stringify(error)}`);
        }
        globalThis.abilityContext.startAbility({
          bundleName: 'com.example.pushcheckpublisher',
          abilityName: 'EntryAbility',
          parameters: {
            action: 'Acts_PushCheck_0100',
            id: 1,
            slotType: notificationManager.SlotType.CONTENT_INFORMATION
          }
        },(err) => {
          console.info(`====>Acts_PushCheck_0100 startAbility err: ${JSON.stringify(err)}`);
          expect(err.code).assertEqual(0)
        })
      })

      function OnCheckNotification(info : notificationManager.NotificationCheckInfo) {
        console.info(`====>Acts_PushCheck_0100 OnCheckNotification info: ${JSON.stringify(info)}`);
        if(info.notificationId == 1){
          return { code: 1, message: "testMsg1"}
        } else {
          return { code: 0, message: "testMsg0"}
        }
      }

      function subscribeCallBack(err, data) {
        console.info(`====>Acts_PushCheck_0100 subscribeCallBack data: ${JSON.stringify(data)}`);
        if (data.event === 'ACTS_PUBLISH_NOTIFICATION_EVENT') {
          flag = true
          expect(data.parameters.message.code).assertEqual(1600001)
          CommonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      function unSubscribeCallback() {
        try {
          notificationManager.off("checkNotification");
          console.info('====>Acts_PushCheck_0100 unSubscribeCallback');
          done();
        } catch(err) {
          expect().assertFail()
          console.info(`====>Acts_PushCheck_0100 off err: ${JSON.stringify(err)}`);
          done()
        }
      }

      setTimeout(() => {
        if (flag === false){
          expect().assertFail()
          CommonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        }
      },CASE_TIME_OUT)
    })

    /*
     * @tc.number: Acts_PushCheck_0400
     * @tc.name: Integration of local and remote notification experience
     * @tc.desc: system applications with permissions, call the on method, passing in error parameters.
     */
    it('Acts_PushCheck_0400',0, async function (done) {
      console.info('====>Acts_PushCheck_0400 start')
      try{
        notificationManager.on(null, OnCheckNotification)
        console.info(`====>Acts_PushCheck_0400 notificationManager.on end`);
      } catch (error){
        expect(error.code).assertEqual(401)
        console.info(`====>Acts_PushCheck_0400 notificationManager.on error: ${JSON.stringify(error)}`);
        done()
      }

      function OnCheckNotification(info : notificationManager.NotificationCheckInfo) {
        console.info(`====>Acts_PushCheck_0400 OnCheckNotification info: ${JSON.stringify(info)}`);
        if(info.notificationId == 1){
          return { code: 1, message: "testMsg1"}
        } else {
          return { code: 0, message: "testMsg0"}
        }
      }
    })

    /*
     * @tc.number: Acts_PushCheck_0500
     * @tc.name: Integration of local and remote notification experience
     * @tc.desc: system applications with permissions, call the off method.
     */
    it('Acts_PushCheck_0500',0, async function (done) {
      var subscriber;
      var flag = false;
      console.info('====>Acts_PushCheck_0500 start');
      CommonEventManager.createSubscriber(Acts_PushCheck).then(async (data) => {
        console.info('====>Acts_PushCheck_0500 Create Subscribe');
        subscriber = data;
        CommonEventManager.subscribe(subscriber, subscribeCallBack);
        try{
          notificationManager.on("checkNotification", OnCheckNotification);
          console.info(`====>Acts_PushCheck_0500 notificationManager.on end`);
        } catch (error){
          expect().assertFail()
          console.info(`====>Acts_PushCheck_0500 notificationManager.on error: ${JSON.stringify(error)}`);
        }
        try{
          notificationManager.off("checkNotification");
          console.info(`====>Acts_PushCheck_0500 notificationManager.off end`);
        } catch (error){
          expect().assertFail()
          console.info(`====>Acts_PushCheck_0500 notificationManager.off error: ${JSON.stringify(error)}`);
        }
        globalThis.abilityContext.startAbility({
          bundleName: 'com.example.pushcheckpublisher',
          abilityName: 'EntryAbility',
          parameters: {
            action: 'Acts_PushCheck_0500',
            id: 1,
            slotType: notificationManager.SlotType.CONTENT_INFORMATION
          }
        },(err) => {
          console.info(`====>Acts_PushCheck_0500 startAbility err: ${JSON.stringify(err)}`);
          expect(err.code).assertEqual(0)
        })
      })

      function OnCheckNotification(info : notificationManager.NotificationCheckInfo) {
        console.info(`====>Acts_PushCheck_0500 OnCheckNotification info: ${JSON.stringify(info)}`);
        if(info.notificationId == 1){
          return { code: 1, message: "testMsg1"}
        } else {
          return { code: 0, message: "testMsg0"}
        }
      }

      function subscribeCallBack(err, data) {
        console.info(`====>Acts_PushCheck_0500 subscribeCallBack data: ${JSON.stringify(data)}`);
        if (data.event === 'ACTS_PUBLISH_NOTIFICATION_EVENT') {
          flag = true
          expect(data.parameters.message).assertTrue()
          CommonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      function unSubscribeCallback() {
        console.info('====>Acts_PushCheck_0500 unSubscribeCallback');
        done();
      }

      setTimeout(() => {
        if (flag === false){
          expect().assertFail()
          CommonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        }
      },CASE_TIME_OUT)
    })

    /*
     * @tc.number: Acts_PushCheck_0800
     * @tc.name: Integration of local and remote notification experience
     * @tc.desc: system applications with permissions, call the off method, passing in error parameters.
     */
    it('Acts_PushCheck_0800',0, async function (done) {
      try{
        notificationManager.off(null)
        console.info(`====>Acts_PushCheck_0800 notificationManager.off end`)
        done()
      } catch (error){
        expect(error.code).assertEqual(401)
        console.info(`====>Acts_PushCheck_0800 notificationManager.off error: ${JSON.stringify(error)}`)
        done()
      }
    })

    /*
     * @tc.number: Acts_PushCheck_0900
     * @tc.name: Integration of local and remote notification experience
     * @tc.desc: normal applications with permission, call PublishCONTENT_INFORMATION notification,
     *           and the verification result is passed.
     */
    it('Acts_PushCheck_0900',0, async function (done) {
      var subscriber;
      var flag = false;
      console.info('====>Acts_PushCheck_0900 start');
      CommonEventManager.createSubscriber(Acts_PushCheck).then(async (data) => {
        console.info('====>Acts_PushCheck_0900 Create Subscribe');
        subscriber = data;
        CommonEventManager.subscribe(subscriber, subscribeCallBack);
        try{
          notificationManager.on("checkNotification", OnCheckNotification);
          console.info(`====>Acts_PushCheck_0900 notificationManager.on end`);
        } catch (error){
          expect().assertFail()
          console.info(`====>Acts_PushCheck_0900 notificationManager.on error: ${JSON.stringify(error)}`);
        }
        globalThis.abilityContext.startAbility({
          bundleName: 'com.example.pushcheckpublisher',
          abilityName: 'EntryAbility',
          parameters: {
            action: 'Acts_PushCheck_0900',
            id: 0,
            slotType: notificationManager.SlotType.CONTENT_INFORMATION
          }
        },(err) => {
          console.info(`====>Acts_PushCheck_0900 startAbility err: ${JSON.stringify(err)}`);
          expect(err.code).assertEqual(0)
        })
      })

      function OnCheckNotification(info : notificationManager.NotificationCheckInfo) {
        console.info(`====>Acts_PushCheck_0900 OnCheckNotification info: ${JSON.stringify(info)}`);
        if(info.notificationId == 1){
          return { code: 1, message: "testMsg1"}
        } else {
          return { code: 0, message: "testMsg0"}
        }
      }

      function subscribeCallBack(err, data) {
        console.info(`====>Acts_PushCheck_0900 subscribeCallBack data: ${JSON.stringify(data)}`);
        if (data.event === 'ACTS_PUBLISH_NOTIFICATION_EVENT') {
          flag = true
          expect(data.parameters.message).assertTrue()
          CommonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      function unSubscribeCallback() {
        try {
          notificationManager.off("checkNotification");
          console.info('====>Acts_PushCheck_0900 unSubscribeCallback');
          done();
        } catch(err) {
          expect().assertFail()
          console.info(`====>Acts_PushCheck_0900 off err: ${JSON.stringify(err)}`);
          done()
        }
      }

      setTimeout(() => {
        if (flag === false){
          expect().assertFail()
          CommonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        }
      },CASE_TIME_OUT)
    })

    /*
     * @tc.number: Acts_PushCheck_1000
     * @tc.name: Integration of local and remote notification experience
     * @tc.desc: normal applications with permission, call the Publish method to send CONTENT_INFORMATION
     *           notification, and the verification result fails.
     */
    it('Acts_PushCheck_1000',0, async function (done) {
      var subscriber;
      var flag = false;
      console.info('====>Acts_PushCheck_1000 start');
      CommonEventManager.createSubscriber(Acts_PushCheck).then(async (data) => {
        console.info('====>Acts_PushCheck_1000 Create Subscribe');
        subscriber = data;
        CommonEventManager.subscribe(subscriber, subscribeCallBack);
        try{
          notificationManager.on("checkNotification", OnCheckNotification);
          console.info(`====>Acts_PushCheck_1000 notificationManager.on end`);
        } catch (error){
          expect().assertFail()
          console.info(`====>Acts_PushCheck_1000 notificationManager.on error: ${JSON.stringify(error)}`);
        }
        globalThis.abilityContext.startAbility({
          bundleName: 'com.example.pushcheckpublisher',
          abilityName: 'EntryAbility',
          parameters: {
            action: 'Acts_PushCheck_1000',
            id: 1,
            slotType: notificationManager.SlotType.CONTENT_INFORMATION
          }
        },(err) => {
          console.info(`====>Acts_PushCheck_1000 startAbility err: ${JSON.stringify(err)}`);
          expect(err.code).assertEqual(0)
        })
      })

      function OnCheckNotification(info : notificationManager.NotificationCheckInfo) {
        console.info(`====>Acts_PushCheck_1000 OnCheckNotification info: ${JSON.stringify(info)}`);
        if(info.notificationId == 1){
          return { code: 1, message: "testMsg1"}
        } else {
          return { code: 0, message: "testMsg0"}
        }
      }

      function subscribeCallBack(err, data) {
        console.info(`====>Acts_PushCheck_1000 subscribeCallBack data: ${JSON.stringify(data)}`);
        if (data.event === 'ACTS_PUBLISH_NOTIFICATION_EVENT') {
          flag = true
          expect(data.parameters.message.code).assertEqual(1600001)
          CommonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      function unSubscribeCallback() {
        try {
          notificationManager.off("checkNotification");
          console.info('====>Acts_PushCheck_1000 unSubscribeCallback');
          done();
        } catch(err) {
          expect().assertFail()
          console.info(`====>Acts_PushCheck_1000 off err: ${JSON.stringify(err)}`);
          done()
        }
      }

      setTimeout(() => {
        if (flag === false){
          expect().assertFail()
          CommonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        }
      },CASE_TIME_OUT)
    })


    /*
     * @tc.number: Acts_PushCheck_1100
     * @tc.name: Integration of local and remote notification experience
     * @tc.desc: system applications with permission, call the Publish method to send CONTENT_INFORMATION
     *           notifications, which are sent normally without verification.
     */
    it('Acts_PushCheck_1100',0, async function (done) {
      var subscriber;
      var flag = false;
      console.info('====>Acts_PushCheck_1100 start');
      CommonEventManager.createSubscriber(Acts_PushCheck).then(async (data) => {
        console.info('====>Acts_PushCheck_1100 Create Subscribe');
        subscriber = data;
        CommonEventManager.subscribe(subscriber, subscribeCallBack)
        try{
          notificationManager.on("checkNotification", OnCheckNotification);
          console.info(`====>Acts_PushCheck_1100 notificationManager.on end`);
        } catch (error){
          expect().assertFail()
          console.info(`====>Acts_PushCheck_1100 notificationManager.on error: ${JSON.stringify(error)}`)
        }
        globalThis.abilityContext.startAbility({
          bundleName: 'com.example.pushcheckpublishersystem',
          abilityName: 'EntryAbility',
          parameters: {
            action: 'Acts_PushCheck_1100',
            id: 1,
            slotType: notificationManager.SlotType.CONTENT_INFORMATION
          }
        },(err) => {
          console.info(`====>Acts_PushCheck_1100 startAbility err: ${JSON.stringify(err)}`)
          expect(err.code).assertEqual(0)
        })
      })

      function OnCheckNotification(info : notificationManager.NotificationCheckInfo) {
        console.info(`====>Acts_PushCheck_1100 OnCheckNotification info: ${JSON.stringify(info)}`)
        if(info.notificationId == 1){
          return { code: 1, message: "testMsg1"}
        } else {
          return { code: 0, message: "testMsg0"}
        }
      }

      function subscribeCallBack(err, data) {
        console.info(`====>Acts_PushCheck_1100 subscribeCallBack data: ${JSON.stringify(data)}`)
        if (data.event === 'ACTS_PUBLISH_NOTIFICATION_EVENT') {
          flag = true
          expect(data.parameters.message).assertTrue()
          CommonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      function unSubscribeCallback() {
        try {
          notificationManager.off("checkNotification");
          console.info('====>Acts_PushCheck_1100 unSubscribeCallback');
          done();
        } catch(err) {
          expect().assertFail()
          console.info(`====>Acts_PushCheck_1100 off err: ${JSON.stringify(err)}`)
          done()
        }
      }

      setTimeout(() => {
        if (flag === false){
          expect().assertFail()
          CommonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        }
      },CASE_TIME_OUT)
    })

    /*
     * @tc.number: Acts_PushCheck_1200
     * @tc.name: Integration of local and remote notification experience
     * @tc.desc: normal applications with permission, call the PUBLISH method to send SERVICE_INFORMATION
     *           notifications, which are sent normally without verification.
     */
    it('Acts_PushCheck_1200',0, async function (done) {
      var subscriber;
      var flag = false;
      console.info('====>Acts_PushCheck_1200 start');
      CommonEventManager.createSubscriber(Acts_PushCheck).then(async (data) => {
        console.info('====>Acts_PushCheck_1200 Create Subscribe')
        subscriber = data;
        CommonEventManager.subscribe(subscriber, subscribeCallBack)
        try{
          notificationManager.on("checkNotification", OnCheckNotification)
          console.info(`====>Acts_PushCheck_1200 notificationManager.on end`)
        } catch (error){
          expect().assertFail()
          console.info(`====>Acts_PushCheck_1200 notificationManager.on error: ${JSON.stringify(error)}`)
        }
        globalThis.abilityContext.startAbility({
          bundleName: 'com.example.pushcheckpublisher',
          abilityName: 'EntryAbility',
          parameters: {
            action: 'Acts_PushCheck_1200',
            id: 1,
            slotType: notificationManager.SlotType.SERVICE_INFORMATION
          }
        },(err) => {
          console.info(`====>Acts_PushCheck_1200 startAbility err: ${JSON.stringify(err)}`)
          expect(err.code).assertEqual(0)
        })
      })

      function OnCheckNotification(info : notificationManager.NotificationCheckInfo) {
        console.info(`====>Acts_PushCheck_1200 OnCheckNotification info: ${JSON.stringify(info)}`)
        if(info.notificationId == 1){
          return { code: 1, message: "testMsg1"}
        } else {
          return { code: 0, message: "testMsg0"}
        }
      }

      function subscribeCallBack(err, data) {
        console.info(`====>Acts_PushCheck_1200 subscribeCallBack data: ${JSON.stringify(data)}`)
        if (data.event === 'ACTS_PUBLISH_NOTIFICATION_EVENT') {
          flag = true
          expect(data.parameters.message).assertTrue()
          CommonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      function unSubscribeCallback() {
        try {
          notificationManager.off("checkNotification");
          console.info('====>Acts_PushCheck_1200 unSubscribeCallback');
          done();
        } catch(err) {
          expect().assertFail()
          console.info(`====>Acts_PushCheck_1200 off err: ${JSON.stringify(err)}`)
          done()
        }
      }

      setTimeout(() => {
        if (flag === false){
          expect().assertFail()
          CommonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        }
      },CASE_TIME_OUT)
    })

    /*
     * @tc.number: Acts_PushCheck_1300
     * @tc.name: Integration of local and remote notification experience
     * @tc.desc: normal applications with permission, call the PUBLISH method to send Social_Communication
     *           notifications, which are sent normally without verification.
     */
    it('Acts_PushCheck_1300',0, async function (done) {
      var subscriber;
      var flag = false;
      console.info('====>Acts_PushCheck_1300 start')
      CommonEventManager.createSubscriber(Acts_PushCheck).then(async (data) => {
        console.info('====>Acts_PushCheck_1300 Create Subscribe')
        subscriber = data;
        CommonEventManager.subscribe(subscriber, subscribeCallBack);
        try{
          notificationManager.on("checkNotification", OnCheckNotification);
          console.info(`====>Acts_PushCheck_1300 notificationManager.on end`)
        } catch (error){
          expect().assertFail()
          console.info(`====>Acts_PushCheck_1300 notificationManager.on error: ${JSON.stringify(error)}`)
        }
        globalThis.abilityContext.startAbility({
          bundleName: 'com.example.pushcheckpublisher',
          abilityName: 'EntryAbility',
          parameters: {
            action: 'Acts_PushCheck_1300',
            id: 1,
            slotType: notificationManager.SlotType.SOCIAL_COMMUNICATION
          }
        },(err) => {
          console.info(`====>Acts_PushCheck_1300 startAbility err: ${JSON.stringify(err)}`)
          expect(err.code).assertEqual(0)
        })
      })

      function OnCheckNotification(info : notificationManager.NotificationCheckInfo) {
        console.info(`====>Acts_PushCheck_1300 OnCheckNotification info: ${JSON.stringify(info)}`)
        if(info.notificationId == 1){
          return { code: 1, message: "testMsg1"}
        } else {
          return { code: 0, message: "testMsg0"}
        }
      }

      function subscribeCallBack(err, data) {
        console.info(`====>Acts_PushCheck_1300 subscribeCallBack data: ${JSON.stringify(data)}`)
        if (data.event === 'ACTS_PUBLISH_NOTIFICATION_EVENT') {
          flag = true
          expect(data.parameters.message).assertTrue()
          CommonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      function unSubscribeCallback() {
        try {
          notificationManager.off("checkNotification");
          console.info('====>Acts_PushCheck_1300 unSubscribeCallback')
          done();
        } catch(err) {
          expect().assertFail()
          console.info(`====>Acts_PushCheck_1300 off err: ${JSON.stringify(err)}`)
          done()
        }
      }

      setTimeout(() => {
        if (flag === false){
          expect().assertFail()
          CommonEventManager.unsubscribe(subscriber, unSubscribeCallback)
        }
      },CASE_TIME_OUT)
    })

    /*
     * @tc.number: Acts_PushCheck_1400
     * @tc.name: Integration of local and remote notification experience
     * @tc.desc: normal applications with permission, call the PUBLISH method to send OTHER_TYPES
     *           notifications, which are sent normally without verification.
     */
    it('Acts_PushCheck_1400',0, async function (done) {
      var subscriber;
      var flag = false;
      console.info('====>Acts_PushCheck_1400 start');
      CommonEventManager.createSubscriber(Acts_PushCheck).then(async (data) => {
        console.info('====>Acts_PushCheck_1400 Create Subscribe');
        subscriber = data;
        CommonEventManager.subscribe(subscriber, subscribeCallBack);
        try{
          notificationManager.on("checkNotification", OnCheckNotification);
          console.info(`====>Acts_PushCheck_1400 notificationManager.on end`);
        } catch (error){
          expect().assertFail()
          console.info(`====>Acts_PushCheck_1400 notificationManager.on error: ${JSON.stringify(error)}`);
        }
        globalThis.abilityContext.startAbility({
          bundleName: 'com.example.pushcheckpublisher',
          abilityName: 'EntryAbility',
          parameters: {
            action: 'Acts_PushCheck_1400',
            id: 1,
            slotType: notificationManager.SlotType.OTHER_TYPES
          }
        },(err) => {
          console.info(`====>Acts_PushCheck_1400 startAbility err: ${JSON.stringify(err)}`)
          expect(err.code).assertEqual(0)
        })
      })

      function OnCheckNotification(info : notificationManager.NotificationCheckInfo) {
        console.info(`====>Acts_PushCheck_1400 OnCheckNotification info: ${JSON.stringify(info)}`)
        if(info.notificationId == 1){
          return { code: 1, message: "testMsg1"}
        } else {
          return { code: 0, message: "testMsg0"}
        }
      }

      function subscribeCallBack(err, data) {
        console.info(`====>Acts_PushCheck_1400 subscribeCallBack data: ${JSON.stringify(data)}`)
        if (data.event === 'ACTS_PUBLISH_NOTIFICATION_EVENT') {
          flag = true
          expect(data.parameters.message).assertTrue()
          CommonEventManager.unsubscribe(subscriber, unSubscribeCallback)
        }
      }

      function unSubscribeCallback() {
        try {
          notificationManager.off("checkNotification");
          console.info('====>Acts_PushCheck_1400 unSubscribeCallback')
          done();
        } catch(err) {
          expect().assertFail()
          console.info(`====>Acts_PushCheck_1400 off err: ${JSON.stringify(err)}`)
          done()
        }
      }

      setTimeout(() => {
        if (flag === false){
          expect().assertFail()
          CommonEventManager.unsubscribe(subscriber, unSubscribeCallback)
        }
      },CASE_TIME_OUT)
    })
  })
}