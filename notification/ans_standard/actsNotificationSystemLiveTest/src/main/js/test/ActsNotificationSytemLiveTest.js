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
import wantAgent from '@ohos.app.ability.wantAgent'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import notificationManager from '@ohos.notificationManager'
import hilog from 'ohos.hilog'
const TAG = 'NotificationActs'
const TEST_SUITE_NAME = 'testNotificationLiveNotification'
export default function ActsNotificationSytemLiveTest() {
  describe('testNotificationLiveNotification', function () {

    /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_0100
     * @tc.name      : testLiveNotificationTypecodeForNull
     * @tc.desc      : test publish interface fail
     */
    it('testLiveNotificationTypecodeForNull', 0, async function (done) {
      console.info(`${TAG} SUB_NOTIFICATION_ANS_GET_WANT_AGENT_NEW_TEST_0100 START`)
      const TEST_CASE_NAME = 'testLiveNotificationTypecodeForNull'
      let notificationRequest = {
        id : 1,
        content : {
          contenType : 5,
          systemLiveView : {
            title : 'title',
            text : 'text',
            typeCode : null
          }
        }
      }
      try {
        hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
        notificationManager.pubish(notificationRequest,(err,data) => {
          if (err) {
            hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
            expect(false).assertTrue();
            hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
            done()
          }else{
            hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
            expect(false).assertTrue();
            hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
            done()
          }
        })
      } catch (error) {
        hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
        expect(true).assertTrue();
        hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
        done()
      }
    })

    /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_0100
     * @tc.name      : testLiveNotificationTypecodeForNull
     * @tc.desc      : test publish interface fail
     */
    it('testLiveNotificationTypecodeForNull', 0, async function (done) {
      const TEST_CASE_NAME = 'testLiveNotificationTypecodeForNull'
      let notificationRequest = {
        id : 1,
        content : {
          contenType : 5,
          systemLiveView : {
            title : 'title',
            text : 'text',
            typeCode : null
          }
        }
      }
      try {
        hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
        notificationManager.pubish(notificationRequest,(err,data) => {
          if (err) {
            hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
            expect(false).assertTrue();
            hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
            done()
          }else{
            hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
            expect(false).assertTrue();
            hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
            done()
          }
        })
      } catch (error) {
        hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
        expect(true).assertTrue();
        hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
        done()
      }
    })

     /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_0200
     * @tc.name      : testLiveNotificationNoCapsule
     * @tc.desc      : test publish interface fail
     */
      it('testLiveNotificationNoCapsule', 0, async function (done) {
          const TEST_CASE_NAME = 'testLiveNotificationNoCapsule'
          let notificationRequest = {
            id : 1,
            content : {
              contenType : 5,
              systemLiveView : {
                title : 'title',
                text : 'text',
                typeCode : 0
              }
            }
          }
          try {
            hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
            notificationManager.pubish(notificationRequest,(err,data) => {
              if (err) {
                hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
                expect(false).assertTrue();
                hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
                done()
              }else{
                hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
                expect(true).assertTrue();
                hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
                done()
              }
            })
          } catch (error) {
            hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
            expect(false).assertTrue();
            hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
            done()
          }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_0300
     * @tc.name      : testLiveNotificationCapsuleForNull
     * @tc.desc      : test publish interface success
     */
       it('testLiveNotificationCapsuleForNull', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationCapsuleForNull'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {}
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_0400
     * @tc.name      : testLiveNotificationCapsuleForUndefined
     * @tc.desc      : test publish interface success
     */
      it('testLiveNotificationCapsuleForUndefined', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationCapsuleForUndefined'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {}
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_0500
     * @tc.name      : testLiveNotificationCapsuleTitleForChar
     * @tc.desc      : test publish interface success
     */
      it('testLiveNotificationCapsuleTitleForChar', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationCapsuleTitleForChar'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                title : ''
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_0600
     * @tc.name      : testLiveNotificationCapsuleTitleForNull
     * @tc.desc      : test publish interface success
     */
      it('testLiveNotificationCapsuleTitleForChar', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationCapsuleTitleForChar'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                title : null
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

       /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_0700
     * @tc.name      : testLiveNotificationCapsuleTitleForUndefined
     * @tc.desc      : test publish interface fail
     */
       it('testLiveNotificationCapsuleTitleForUndefined', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationCapsuleTitleForUndefined'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                title : undefined
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_0900
     * @tc.name      : testLiveNotificationCapsuleNoTitle
     * @tc.desc      : test publish interface fail
     */
      it('testLiveNotificationCapsuleNoTitle', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationCapsuleNoTitle'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {}
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_1000
     * @tc.name      : testLiveNotificationCapsulsIconForNull
     * @tc.desc      : test publish interface fail
     */
      it('testLiveNotificationCapsulsIconForNull', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationCapsulsIconForNull'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                icon : null
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

     /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_1100
     * @tc.name      : testLiveNotificationCapsulsIconForUndefined
     * @tc.desc      : test publish interface fail
     */
       it('testLiveNotificationCapsulsIconForUndefined', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationCapsulsIconForUndefined'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                icon : undefined
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

       /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_1300
     * @tc.name      : testLiveNotificationCapsuleNoIcon
     * @tc.desc      : test publish interface fail
     */
       it('testLiveNotificationCapsuleNoIcon', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationCapsuleNoIcon'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                title : 'title'
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_1400
     * @tc.name      : testLiveNotificationCapsuleBackgroundColorNoChar
     * @tc.desc      : test publish interface fail
     */
      it('testLiveNotificationCapsuleBackgroundColorNoChar', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationCapsuleBackgroundColorNoChar'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : ''
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_1500
     * @tc.name      : testLiveNotificationCapsuleBackgroundColorForNull
     * @tc.desc      : test publish interface fail
     */
      it('testLiveNotificationCapsuleBackgroundColorForNull', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationCapsuleBackgroundColorForNull'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : null
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_1600
     * @tc.name      : testLiveNotificationCapsuleBackgroundColorForUndefined
     * @tc.desc      : test publish interface fail
     */
       it('testLiveNotificationCapsuleBackgroundColorForUndefined', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationCapsuleBackgroundColorForUndefined'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : undefined
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_1700
     * @tc.name      : testLiveNotificationNoButton
     * @tc.desc      : test publish interface success
     */
      it('testLiveNotificationNoButton', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationNoButton'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

     /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_1800
     * @tc.name      : testLiveNotificationButtonForNull
     * @tc.desc      : test publish interface success
     */
      it('testLiveNotificationButtonForNull', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationButtonForNull'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              button : {}
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_1900
     * @tc.name      : testLiveNotificationButtonForUndefined
     * @tc.desc      : test publish interface success
     */
       it('testLiveNotificationButtonForUndefined', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationButtonForUndefined'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              button : {}
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_2000
     * @tc.name      : testLiveNotificationButtonForUndefined
     * @tc.desc      : test publish interface success
     */
      it('testLiveNotificationButtonForUndefined', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationButtonForUndefined'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              button : {}
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_2000
     * @tc.name      : testLiveNotificationButtonNoNames
     * @tc.desc      : test publish interface success
     */
      it('testLiveNotificationButtonNoNames', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationButtonNoNames'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_2100
     * @tc.name      : testLiveNotificationButtonNamesForNull
     * @tc.desc      : test publish interface success
     */
      it('testLiveNotificationButtonNamesForNull', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationButtonNamesForNull'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              button : {
                names : null
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

       /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_2200
     * @tc.name      : testLiveNotificationButtonNamesForUndefined
     * @tc.desc      : test publish interface success
     */
       it('testLiveNotificationButtonNamesForUndefined', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationButtonNamesForUndefined'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              button : {
                names : undefined
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_2300
     * @tc.name      : testLiveNotificationButtonNoicons
     * @tc.desc      : test publish interface success
     */
       it('testLiveNotificationButtonNamesForUndefined', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationButtonNamesForUndefined'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              button : {
                names : ['button1','button2','button3']
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_2400
     * @tc.name      : testLiveNotificationButtoniconsForNull
     * @tc.desc      : test publish interface fail
     */
      it('testLiveNotificationButtoniconsForNull', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationButtoniconsForNull'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              button : {
                names : ['button1','button2','button3'],
                icons : null
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

       /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_2500
     * @tc.name      : testLiveNotificationButtoniconsForUndefined
     * @tc.desc      : test publish interface fail
     */
       it('testLiveNotificationButtoniconsForUndefined', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationButtoniconsForUndefined'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              button : {
                names : ['button1','button2','button3'],
                icons : null
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

       /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_2600
     * @tc.name      : testLiveNotificationNotime
     * @tc.desc      : test publish interface success
     */
       it('testLiveNotificationNotime', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationNotime'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_2700
     * @tc.name      : testLiveNotificationtimeForNull
     * @tc.desc      : test publish interface success
     */
      it('testLiveNotificationtimeForNull', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationtimeForNull'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {}
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_2800
     * @tc.name      : testLiveNotificationtimeForUndfined
     * @tc.desc      : test publish interface success
     */
      it('testLiveNotificationtimeForUndfined', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationtimeForUndfined'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {}
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_2900
     * @tc.name      : testLiveNotificationtimeNoinitialTime
     * @tc.desc      : test publish interface success
     */
      it('testLiveNotificationtimeNoinitialTime', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationtimeNoinitialTime'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                isCountDown : true
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_3000
     * @tc.name      : testLiveNotificationtimeinitialTimeForNull
     * @tc.desc      : test publish interface fail
     */
      it('testLiveNotificationtimeinitialTimeForNull', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationtimeinitialTimeForNull'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : null
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_3100
     * @tc.name      : testLiveNotificationtimeinitialTimeForUndefined
     * @tc.desc      : test publish interface fail
     */
       it('testLiveNotificationtimeinitialTimeForUndefined', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationtimeinitialTimeForUndefined'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : undefined
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_3200
     * @tc.name      : testLiveNotificationtimeNoisCountDown
     * @tc.desc      : test publish interface success
     */
      it('testLiveNotificationtimeNoisCountDown', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationtimeNoisCountDown'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : 2
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_3300
     * @tc.name      : testLiveNotificationtimeisCountDownForNull
     * @tc.desc      : test publish interface success
     */
      it('testLiveNotificationtimeisCountDownForNull', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationtimeisCountDownForNull'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : 2,
                isCountDown : null
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

       /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_3400
     * @tc.name      : testLiveNotificationtimeisCountDownForUndefined
     * @tc.desc      : test publish interface fail
     */
       it('testLiveNotificationtimeisCountDownForUndefined', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationtimeisCountDownForUndefined'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : 2,
                isCountDown : undefined
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_3500
     * @tc.name      : testLiveNotificationtimeNoisPaused
     * @tc.desc      : test publish interface success
     */
      it('testLiveNotificationtimeNoisPaused', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationtimeNoisPaused'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : 2,
                isCountDown : true
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

       /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_3600
     * @tc.name      : testLiveNotificationtimeisPausedForNull
     * @tc.desc      : test publish interface fail
     */
       it('testLiveNotificationtimeisPausedForNull', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationtimeisPausedForNull'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : 2,
                isCountDown : true,
                isPaused : null
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_3700
     * @tc.name      : testLiveNotificationtimeisPausedForUndefined
     * @tc.desc      : test publish interface fail
     */
      it('testLiveNotificationtimeisPausedForUndefined', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationtimeisPausedForUndefined'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : 2,
                isCountDown : true,
                isPaused : undefined
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

       /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_3800
     * @tc.name      : testLiveNotificationtimeNoisInTitle
     * @tc.desc      : test publish interface fail
     */
       it('testLiveNotificationtimeNoisInTitle', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationtimeNoisInTitle'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : 2,
                isCountDown : true
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_3900
     * @tc.name      : testLiveNotificationtimeisInTitleForNull
     * @tc.desc      : test publish interface fail
     */
      it('testLiveNotificationtimeisInTitleForNull', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationtimeisInTitleForNull'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : 2,
                isCountDown : true,
                isInTitle : null
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_4000
     * @tc.name      : testLiveNotificationtimeisInTitleForUndefined
     * @tc.desc      : test publish interface fail
     */
      it('testLiveNotificationtimeisInTitleForUndefined', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationtimeisInTitleForUndefined'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : 2,
                isCountDown : true,
                isInTitle : undefined
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_4100
     * @tc.name      : testLiveNotificationtimeNoprogress
     * @tc.desc      : test publish interface fail
     */
      it('testLiveNotificationtimeNoprogress', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationtimeNoprogress'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : 2,
                isCountDown : true
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

       /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_4200
     * @tc.name      : testLiveNotificationtimeProgressForNull
     * @tc.desc      : test publish interface success
     */
       it('testLiveNotificationtimeProgressForNull', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationtimeProgressForNull'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : 2,
                isCountDown : true
              },
              progress : {}
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

       /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_4300
     * @tc.name      : testLiveNotificationtimeProgressForUndefined
     * @tc.desc      : test publish interface success
     */
       it('testLiveNotificationtimeProgressForUndefined', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationtimeProgressForUndefined'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : 2,
                isCountDown : true
              },
              progress : {}
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_4400
     * @tc.name      : testLiveNotificationtimeProgressNoMaxValue
     * @tc.desc      : test publish interface success
     */
       it('testLiveNotificationtimeProgressNoMaxValue', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationtimeProgressNoMaxValue'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : 2,
                isCountDown : true
              },
              progress : {
                currentValue : 1
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_4500
     * @tc.name      : testLiveNotificationProgressMaxValueForNull
     * @tc.desc      : test publish interface fail
     */
      it('testLiveNotificationtimeProgressMaxValueForNull', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationtimeProgressMaxValueForNull'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : 2,
                isCountDown : true
              },
              progress : {
                maxValue : null
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_4600
     * @tc.name      : testLiveNotificationProgressMaxValueForUndefined
     * @tc.desc      : test publish interface fail
     */
       it('testLiveNotificationtimeProgressMaxValueForUndefined', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationtimeProgressMaxValueForUndefined'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : 2,
                isCountDown : true
              },
              progress : {
                maxValue : undefined
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

       /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_4700
     * @tc.name      : testLiveNotificationProgressNocurrentValue
     * @tc.desc      : test publish interface success
     */
       it('testLiveNotificationProgressNocurrentValue', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationProgressNocurrentValue'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : 2,
                isCountDown : true
              },
              progress : {
                maxValue : 1
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_4800
     * @tc.name      : testLiveNotificationProgressCurrentValueForNull
     * @tc.desc      : test publish interface fail
     */
       it('testLiveNotificationProgressCurrentValueForNull', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationProgressCurrentValueForNull'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : 2,
                isCountDown : true
              },
              progress : {
                maxValue : 1,
                currentValue : null
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

     /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_4900
     * @tc.name      : testLiveNotificationProgressCurrentValueForUndefined
     * @tc.desc      : test publish interface fail
     */
      it('testLiveNotificationProgressCurrentValueForUndefined', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationProgressCurrentValueForUndefined'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : 2,
                isCountDown : true
              },
              progress : {
                maxValue : 1,
                currentValue : undefined
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_5000
     * @tc.name      : testLiveNotificationProgressNoisPercentage
     * @tc.desc      : test publish interface success
     */
      it('testLiveNotificationProgressNoisPercentage', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationProgressNoisPercentage'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : 2,
                isCountDown : true
              },
              progress : {
                maxValue : 1
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(true).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(false).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_5100
     * @tc.name      : testLiveNotificationProgressisPercentageForNull
     * @tc.desc      : test publish interface success
     */
      it('testLiveNotificationProgressisPercentageForNull', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationProgressisPercentageForNull'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : 2,
                isCountDown : true
              },
              progress : {
                maxValue : 1,
                isPercentage : null
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

       /*
     * @tc.number    : Sub_Notification_Ans_Live_Publish_5200
     * @tc.name      : testLiveNotificationProgressisPercentageForUndefined
     * @tc.desc      : test publish interface success
     */
       it('testLiveNotificationProgressisPercentageForUndefined', 0, async function (done) {
        const TEST_CASE_NAME = 'testLiveNotificationProgressisPercentageForUndefined'
        let notificationRequest = {
          id : 1,
          content : {
            contenType : 5,
            systemLiveView : {
              title : 'title',
              text : 'text',
              typeCode : 0,
              capsule : {
                backgroundColor : 'bacj'
              },
              time : {
                initialTime : 2,
                isCountDown : true
              },
              progress : {
                maxValue : 1,
                isPercentage : undefined
              }
            }
          }
        }
        try {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case start`)
          notificationManager.pubish(notificationRequest,(err,data) => {
            if (err) {
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }else{
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish success,data is %{public}s`,JSON.stringify(data));
              expect(false).assertTrue();
              hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
              done()
            }
          })
        } catch (error) {
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `publish failed,data is %{public}s`,JSON.stringify(err));
          expect(true).assertTrue();
          hilog.info(0x000,`${TAG}`,`${TEST_SUITE_NAME}`,`${TEST_CASE_NAME}` + `test case end`)
          done()
        }
      })

      






      


    
  })
}
