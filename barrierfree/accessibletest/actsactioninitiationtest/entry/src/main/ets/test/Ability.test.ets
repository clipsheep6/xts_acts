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
import config from '@ohos.accessibility.config'

const ASSIST_BUNDLE_NAME = 'com.example.actioninitiationtest/ServiceExtAbility'
const LOG_PREFIX = '[CQH-ACTION-ABILITY-TEST]'
const EVENT_NAME = 'on_assist_change'
const EVENT_NAME_BACK = 'on_assist_change_extra'
const TIME_OUT = 3000
let CommonEventSubscribeInfo = {
  events: [EVENT_NAME_BACK]
}

export default function abilityTest() {

  let subscriber = undefined
  let result: Map<string, boolean> = new Map()

  describe('ActsActionInitiationTest', function () {
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
            result.set(commonEventData.data, commonEventData.parameters.res)
          })
        } catch (e) {
          console.info(LOG_PREFIX + 'subscribe failed. Cause:' + JSON.stringify(e))
        }
        enableAbility(LOG_PREFIX, ASSIST_BUNDLE_NAME)
        ThreadSleep(TIME_OUT).then(() => {
          done()
        })
      } catch (e) {
        console.info(LOG_PREFIX + '[StartTargetApp]  error' + e.message)
      }
    })
    afterAll(async function (done) {
      disableAbility(LOG_PREFIX, ASSIST_BUNDLE_NAME)
      done()
    })
    beforeEach(function (done) {
      ThreadSleep(TIME_OUT).then(() => {
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0010
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the focus operation(promise).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the focus operation(promise).
     */
    it('ActionInitiation_0010', 3, async function (done) {
      var caseCode = 'ActionInitiation_0010'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0010 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0011
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the click operation(promise).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the click operation(promise).
     */
    it('ActionInitiation_0011', 3, async function (done) {
      var caseCode = 'ActionInitiation_0011'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0011 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0021
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the accessibilityFocus operation(promise).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the accessibilityFocus operation(promise).
     */
    it('ActionInitiation_0021', 3, async function (done) {
      var caseCode = 'ActionInitiation_0021'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0021 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0020
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the clearAccessibilityFocus operation(promise).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the clearAccessibilityFocus operation(promise).
     */
    it('ActionInitiation_0020', 3, async function (done) {
      var caseCode = 'ActionInitiation_0020'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0020 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0012
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the focus operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the focus operation(callback).
     */
    it('ActionInitiation_0012', 3, async function (done) {
      var caseCode = 'ActionInitiation_0012'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0012 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0014
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the click operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the click operation(callback).
     */
    it('ActionInitiation_0014', 3, async function (done) {
      var caseCode = 'ActionInitiation_0014'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0014 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0022
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the accessibilityFocus operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the accessibilityFocus operation(callback).
     */
    it('ActionInitiation_0022', 3, async function (done) {
      var caseCode = 'ActionInitiation_0022'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0022 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0024
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the clearAccessibilityFocus operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the clearAccessibilityFocus operation(callback).
     */
    it('ActionInitiation_0024', 3, async function (done) {
      var caseCode = 'ActionInitiation_0024'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0024 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0013
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the focus operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the focus operation(callback).
     */
    it('ActionInitiation_0013', 3, async function (done) {
      var caseCode = 'ActionInitiation_0013'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0013 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0015
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the click operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the click operation(callback).
     */
    it('ActionInitiation_0015', 3, async function (done) {
      var caseCode = 'ActionInitiation_0015'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0015 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0023
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the accessibilityFocus operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the accessibilityFocus operation(callback).
     */
    it('ActionInitiation_0023', 3, async function (done) {
      var caseCode = 'ActionInitiation_0023'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0023 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0025
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the clearAccessibilityFocus operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the clearAccessibilityFocus operation(callback).
     */
    it('ActionInitiation_0025', 3, async function (done) {
      var caseCode = 'ActionInitiation_0025'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0025 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0070
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the scrollForward operation(promise).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the scrollForward operation(promise).
     */
    it('ActionInitiation_0070', 3, async function (done) {
      var caseCode = 'ActionInitiation_0070'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0070 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0090
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the scrollBackward operation(promise).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the scrollBackward operation(promise).
     */
    it('ActionInitiation_0090', 3, async function (done) {
      var caseCode = 'ActionInitiation_0090'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0090 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0071
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the scrollForward operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the scrollForward operation(callback).
     */
    it('ActionInitiation_0071', 3, async function (done) {
      var caseCode = 'ActionInitiation_0071'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0071 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0091
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the scrollBackward operation(promise).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the scrollBackward operation(promise).
     */
    it('ActionInitiation_0091', 3, async function (done) {
      var caseCode = 'ActionInitiation_0091'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0091 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0072
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the scrollForward operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the scrollForward operation(callback).
     */
    it('ActionInitiation_0072', 3, async function (done) {
      var caseCode = 'ActionInitiation_0072'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0072 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0092
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the scrollBackward operation(promise).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the scrollBackward operation(promise).
     */
    it('ActionInitiation_0092', 3, async function (done) {
      var caseCode = 'ActionInitiation_0092'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0092 res: ' + data + ' expect assertTrue')
        done()
      })
    })

  })

  function enableAbility(logTag, bundleName) {
    config.enableAbility(bundleName, ['retrieve']).then(() => {
      console.info(logTag + 'enableAbility success.')
    }).catch((error) => {
      console.info(logTag + 'enableAbility failed. Cause: ' + JSON.stringify(error))
      return
    })
  }

  function disableAbility(logTag, bundleName) {
    config.disableAbility(bundleName).then(() => {
      console.info(logTag + 'disableAbility success.')
    }).catch((error) => {
      console.info(logTag + 'disableAbility failed. Cause: ' + JSON.stringify(error))
      return
    })
  }

  function ThreadSleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms))
  }

  function publish(caseName) {
    let commonEventPublishData = {
      data: caseName
    }
    commonEvent.publish(EVENT_NAME, commonEventPublishData, (err, data) => {
      if (err && err.code != 0) {
        console.info(LOG_PREFIX + caseName + ' failed to publish because ' + JSON.stringify(err))
        return
      }
      console.info(LOG_PREFIX + caseName + ' success publish')
    })
  }

}
