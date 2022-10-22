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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import commonEvent from '@ohos.commonEvent'
import prompt from '@ohos.prompt'
import config from '@ohos.accessibility.config'
import accessibility from '@ohos.accessibility'

const ASSIST_BUNDLE_NAME = 'com.example.accesscontroltest/ServiceExtAbility'
const LOG_PREFIX = '[CQH-ACCESS-CONTROL-TEST]'
const TIMEOUT = 3000
const TIMEOUT_L = 5000
const EVENT_NAME = 'on_target_change'
const EVENT_NAME_ASSIST_BACK = 'on_assist_change_extra'
const EVENT_NAME_TARGET_BACK = 'on_target_change_extra'
let CommonEventSubscribeInfo = {
  events: [EVENT_NAME_ASSIST_BACK, EVENT_NAME_TARGET_BACK]
}
let subscriber = undefined
let tarResult: Map<string, boolean> = new Map()

export default function abilityTest() {

  describe('ActsAccessControlTest', function () {
    beforeAll(async function (done) {
      console.info(LOG_PREFIX + '[StartTargetApp] start')
      try {
        subscriber = await commonEvent.createSubscriber(CommonEventSubscribeInfo)
        try {
          commonEvent.subscribe(subscriber, (error, commonEventData) => {
            if (error.code != 0) {
              console.info(LOG_PREFIX + 'subscribe callback error. Cause:' + JSON.stringify(error))
              return
            }
            console.info(LOG_PREFIX + 'subscribeTest callback : ' + JSON.stringify(commonEventData))
            tarResult.set(commonEventData.data, commonEventData.parameters.res)
          })
        } catch (e) {
          console.info(LOG_PREFIX + 'subscribe failed. Cause:' + JSON.stringify(e))
        }
        accessibility.getAbilityLists('all', 'enable')
          .then((res) => {
            console.info(LOG_PREFIX + ' getAbilityLists res: ' + JSON.stringify(res))
            if (res.length > 0) {
              res.forEach((item)=>{
                console.info(LOG_PREFIX + ' item: ' + JSON.stringify(item))
                var bundleName = item.id
                config.disableAbility(bundleName)
                  .then(() => {
                    console.info(LOG_PREFIX + 'disableAbility success: ' + bundleName)
                  })
                  .catch((error) => {
                    console.info(LOG_PREFIX + 'disableAbility failed. Cause: ' + JSON.stringify(error))
                    return
                  })
              })
            }
          })
          .catch((error) => {
            console.info(LOG_PREFIX + ' getAbilityLists error ' + JSON.stringify(error))
            return
          })
        setTimeout(() => done(), 1000)
      } catch (e) {
        console.info(LOG_PREFIX + '[StartTargetApp]  error' + e.message)
      }
    })
    afterAll(async function (done) {
      prompt.showToast({
        message: 'CASE All End'
      })
      disableAbility(LOG_PREFIX, ASSIST_BUNDLE_NAME)
      done()
    })
    beforeEach(function (done) {
      setTimeout(() => done(), TIMEOUT)
    })
    /**
     * @tc.number: AccessControl_0010
     * @tc.name: When the auxiliary application is opened, the user will be prompted to apply for authorization.
     * @tc.desc: When the auxiliary application is opened, the user will be prompted to apply for authorization.
     */
    it('AccessControl_0010', 1, async function (done) {
      let caseCode = 'AccessControl_0010'
      publish(caseCode)
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + 'AccessControl_0010 tarData: ' + tarData + ' expect assertTrue')
        expect(tarData).assertTrue()
        done()
      }, TIMEOUT)
    })
    /**
     * @tc.number: AccessControl_0040
     * @tc.name: When the auxiliary application is opened, the user will be prompted to apply for authorization (Authorize retrieve).
     * @tc.desc: When the auxiliary application is opened, the user will be prompted to apply for authorization (Authorize retrieve).
     */
    it('AccessControl_0040', 1, async function (done) {
      let caseCode = 'AccessControl_0040'
      publish(caseCode)
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + 'AccessControl_0040 tarData: ' + tarData + ' expect assertTrue')
        expect(tarData).assertTrue()
        done()
      }, TIMEOUT)
    })
    /**
     * @tc.number: AccessControl_0041
     * @tc.name: Authorizes retrieve capability, the auxiliary application has barrier free information retrieval capability.
     * @tc.desc: Authorizes retrieve capability, the auxiliary application has barrier free information retrieval capability.
     */
    it('AccessControl_0041', 1, async function (done) {
      let caseCode = 'AccessControl_0041'
      let logTag = LOG_PREFIX + ' AccessControl_0041 '
      publish(caseCode)
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + 'AccessControl_0041 tarData: ' + tarData + ' expect assertTrue')
        expect(tarData).assertTrue()
        disableAbility(logTag, ASSIST_BUNDLE_NAME)
        done()
      }, TIMEOUT)
    })
    /**
     * @tc.number: AccessControl_0042
     * @tc.name: No authorizes retrieve capability, the auxiliary application has barrier free information retrieval capability.
     * @tc.desc: No authorizes retrieve capability, the auxiliary application has barrier free information retrieval capability.
     */
    it('AccessControl_0042', 1, async function (done) {
      let caseCode = 'AccessControl_0042'
      let logTag = LOG_PREFIX + ' AccessControl_0042 '
      publish(caseCode)
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + 'AccessControl_0042 tarData: ' + tarData + ' expect assertTrue')
        expect(tarData).assertTrue()
        disableAbility(logTag, ASSIST_BUNDLE_NAME)
        done()
      }, TIMEOUT_L + TIMEOUT)
    })
    /**
     * @tc.number: AccessControl_0050
     * @tc.name: When the auxiliary application is opened, the user will be prompted to apply for authorization (Authorize touchGuide).
     * @tc.desc: When the auxiliary application is opened, the user will be prompted to apply for authorization (Authorize touchGuide).
     */
    it('AccessControl_0050', 1, async function (done) {
      let caseCode = 'AccessControl_0050'
      let logTag = LOG_PREFIX + ' AccessControl_0050 '
      publish(caseCode)
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + 'AccessControl_0050 tarData: ' + tarData + ' expect assertTrue')
        expect(tarData).assertTrue()
        disableAbility(logTag, ASSIST_BUNDLE_NAME)
        done()
      }, TIMEOUT_L)
    })
    /**
     * @tc.number: AccessControl_0060
     * @tc.name: When the auxiliary application is opened, the user will be prompted to apply for authorization (Authorize keyEventObserver).
     * @tc.desc: When the auxiliary application is opened, the user will be prompted to apply for authorization (Authorize keyEventObserver).
     */
    it('AccessControl_0060', 1, async function (done) {
      let caseCode = 'AccessControl_0060'
      let logTag = LOG_PREFIX + ' AccessControl_0060 '
      publish(caseCode)
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + 'AccessControl_0060 tarData: ' + tarData + ' expect assertTrue')
        expect(tarData).assertTrue()
        disableAbility(logTag, ASSIST_BUNDLE_NAME)
        done()
      }, TIMEOUT_L)
    })
    /**
     * @tc.number: AccessControl_0080
     * @tc.name: When the auxiliary application is opened, the user will be prompted to apply for authorization (Authorize gesture).
     * @tc.desc: When the auxiliary application is opened, the user will be prompted to apply for authorization (Authorize gesture).
     */
    it('AccessControl_0080', 1, async function (done) {
      let caseCode = 'AccessControl_0080'
      let logTag = LOG_PREFIX + ' AccessControl_0080 '
      publish(caseCode)
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + 'AccessControl_0080 tarData: ' + tarData + ' expect assertTrue')
        expect(tarData).assertTrue()
        done()
      }, TIMEOUT_L)
    })
    /**
     * @tc.number: AccessControl_0081
     * @tc.name: Authorizes gesture capability, the auxiliary application has barrier free information retrieval capability.
     * @tc.desc: Authorizes gesture capability, the auxiliary application has barrier free information retrieval capability.
     */
    it('AccessControl_0081', 1, async function (done) {
      let caseCode = 'AccessControl_0081'
      let logTag = LOG_PREFIX + ' AccessControl_0081 '
      publish(caseCode)
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + 'AccessControl_0081 tarData: ' + tarData + ' expect assertTrue')
        expect(tarData).assertTrue()
        disableAbility(logTag, ASSIST_BUNDLE_NAME)
        done()
      }, TIMEOUT)
    })
    /**
     * @tc.number: AccessControl_0082
     * @tc.name: No authorizes gesture capability, the auxiliary application has barrier free information retrieval capability.
     * @tc.desc: No authorizes gesture capability, the auxiliary application has barrier free information retrieval capability.
     */
    it('AccessControl_0082', 1, async function (done) {
      let caseCode = 'AccessControl_0082'
      let logTag = LOG_PREFIX + ' AccessControl_0082 '
      publish(caseCode)
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + 'AccessControl_0082 tarData: ' + tarData + ' expect assertFalse')
        expect(tarData).assertFalse()
        disableAbility(logTag, ASSIST_BUNDLE_NAME)
        done()
      }, TIMEOUT_L)
    })
    /**
     * @tc.number: AccessControl_0090
     * @tc.name: When the auxiliary application is opened, the user will be prompted to apply for authorization (Authorize retrieve，touchGuide).
     * @tc.desc: When the auxiliary application is opened, the user will be prompted to apply for authorization (Authorize retrieve，touchGuide).
     */
    it('AccessControl_0090', 1, async function (done) {
      let caseCode = 'AccessControl_0090'
      let logTag = LOG_PREFIX + ' AccessControl_0090 '
      publish(caseCode)
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + 'AccessControl_0090 tarData: ' + tarData + ' expect assertTrue')
        expect(tarData).assertTrue()
        disableAbility(logTag, ASSIST_BUNDLE_NAME)
        done()
      }, TIMEOUT_L)
    })
    /**
     * @tc.number: AccessControl_0100
     * @tc.name: When the auxiliary application is opened, the user will be prompted to apply for authorization (Authorize retrieve，touchGuide，keyEventObserver，zoom，gesture).
     * @tc.desc: When the auxiliary application is opened, the user will be prompted to apply for authorization (Authorize retrieve，touchGuide，keyEventObserver，zoom，gesture).
     */
    it('AccessControl_0100', 1, async function (done) {
      let caseCode = 'AccessControl_0100'
      let logTag = LOG_PREFIX + ' AccessControl_0100 '
      publish(caseCode)
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + 'AccessControl_0100 tarData: ' + tarData + ' expect assertTrue')
        expect(tarData).assertTrue()
        disableAbility(logTag, ASSIST_BUNDLE_NAME)
        done()
      }, TIMEOUT_L)
    })
    /**
     * @tc.number: AccessControl_0110
     * @tc.name: When the auxiliary application is opened, the user is prompted to authorize. After the authorization is cancelled, confirm the authorization status of the auxiliary application.
     * @tc.desc: When the auxiliary application is opened, the user is prompted to authorize. After the authorization is cancelled, confirm the authorization status of the auxiliary application.
     */
    it('AccessControl_0110', 1, async function (done) {
      let caseCode = 'AccessControl_0110'
      publish(caseCode)
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + 'AccessControl_0110 tarData: ' + tarData + ' expect assertFalse')
        expect(tarData).assertFalse()
        done()
      }, TIMEOUT_L)
    })

  })

  function publish(caseCode) {
    let commonEventPublishData = {
      data: caseCode, parameters: { res: false }
    }
    commonEvent.publish(EVENT_NAME, commonEventPublishData, (err, data) => {
      if (err.code != 0) {
        console.info(LOG_PREFIX + caseCode + ' failed to publish because ' + JSON.stringify(err))
        return
      }
      console.info(LOG_PREFIX + caseCode + ' success publish')
      prompt.showToast({
        message: 'CASE ' + caseCode
      })
    })
  }

  function disableAbility(logTag, bundleName) {
    config.disableAbility(bundleName)
      .then(() => {
        console.info(logTag + 'disableAbility success.')
      })
      .catch((error) => {
        console.info(logTag + 'disableAbility failed. Cause: ' + JSON.stringify(error))
        return
      })
  }
}
