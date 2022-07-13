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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
import commonEvent from '@ohos.commonEvent'
import prompt from '@system.prompt'
import config from '@ohos.accessibility.config'

const ASSIST_BUNDLE_NAME = 'com.example.actioninitiationtest/ServiceExtAbility'
const LOG_PREFIX = '[CQH-ACTION-ABILITY-TEST]'
const EVENT_NAME = 'on_assist_change'
const EVENT_NAME_BACK = 'on_assist_change_extra'
const TIME_OUT = 3000
let CommonEventSubscribeInfo = {
  events: [EVENT_NAME_BACK]
}

export default function abilityTest(abilityContext) {

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
      prompt.showToast({
        message: 'CASE All End'
      })
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
     * @tc.number: ActionInitiation_0030
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the clearFocus operation(promise).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the clearFocus operation(promise).
     */
    it('ActionInitiation_0030', 3, async function (done) {
      var caseCode = 'ActionInitiation_0030'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0030 res: ' + data + ' expect assertTrue')
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
     * @tc.number: ActionInitiation_0031
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the clearFocus operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the clearFocus operation(callback).
     */
    it('ActionInitiation_0031', 3, async function (done) {
      var caseCode = 'ActionInitiation_0031'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0031 res: ' + data + ' expect assertTrue')
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
     * @tc.number: ActionInitiation_0031
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the clearFocus operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the clearFocus operation(callback).
     */
    it('ActionInitiation_0032', 3, async function (done) {
      var caseCode = 'ActionInitiation_0032'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0032 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0040
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the longClick operation(promise).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the longClick operation(promise).
     */
    it('ActionInitiation_0040', 3, async function (done) {
      var caseCode = 'ActionInitiation_0040'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0040 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0041
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the longClick operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the longClick operation(callback).
     */
    it('ActionInitiation_0041', 3, async function (done) {
      var caseCode = 'ActionInitiation_0041'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0041 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0042
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the longClick operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the longClick operation(callback).
     */
    it('ActionInitiation_0042', 3, async function (done) {
      var caseCode = 'ActionInitiation_0042'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0042 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0050
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the delete operation(promise).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the delete operation(promise).
     */
    it('ActionInitiation_0050', 3, async function (done) {
      var caseCode = 'ActionInitiation_0050'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0050 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0051
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the delete operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the delete operation(callback).
     */
    it('ActionInitiation_0051', 3, async function (done) {
      var caseCode = 'ActionInitiation_0051'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0051 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0052
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the delete operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the delete operation(callback).
     */
    it('ActionInitiation_0052', 3, async function (done) {
      var caseCode = 'ActionInitiation_0052'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0052 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0060
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the select operation(promise).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the select operation(promise).
     */
    it('ActionInitiation_0060', 3, async function (done) {
      var caseCode = 'ActionInitiation_0060'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0060 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0061
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the select operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the select operation(callback).
     */
    it('ActionInitiation_0061', 3, async function (done) {
      var caseCode = 'ActionInitiation_0061'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0061 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0062
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the select operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the select operation(callback).
     */
    it('ActionInitiation_0062', 3, async function (done) {
      var caseCode = 'ActionInitiation_0062'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0062 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0080
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the clearSelection operation(promise).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the clearSelection operation(promise).
     */
    it('ActionInitiation_0080', 3, async function (done) {
      var caseCode = 'ActionInitiation_0080'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0080 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0081
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the clearSelection operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the clearSelection operation(callback).
     */
    it('ActionInitiation_0081', 3, async function (done) {
      var caseCode = 'ActionInitiation_0081'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0081 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0082
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the clearSelection operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the clearSelection operation(callback).
     */
    it('ActionInitiation_0082', 3, async function (done) {
      var caseCode = 'ActionInitiation_0082'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0082 res: ' + data + ' expect assertTrue')
        disableAbility(LOG_PREFIX, ASSIST_BUNDLE_NAME)
        setTimeout(()=>enableAbility(LOG_PREFIX, ASSIST_BUNDLE_NAME), 1000)
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
    /**
     * @tc.number: ActionInitiation_0100
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the copy operation(promise).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the copy operation(promise).
     */
    it('ActionInitiation_0100', 3, async function (done) {
      var caseCode = 'ActionInitiation_0100'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0100 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0101
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the copy operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the copy operation(callback).
     */
    it('ActionInitiation_0101', 3, async function (done) {
      var caseCode = 'ActionInitiation_0101'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0101 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0102
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the copy operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the copy operation(callback).
     */
    it('ActionInitiation_0102', 3, async function (done) {
      var caseCode = 'ActionInitiation_0102'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0102 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0120
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the paste operation(promise).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the paste operation(promise).
     */
    it('ActionInitiation_0120', 3, async function (done) {
      var caseCode = 'ActionInitiation_0120'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0120 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0121
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the paste operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the paste operation(callback).
     */
    it('ActionInitiation_0121', 3, async function (done) {
      var caseCode = 'ActionInitiation_0121'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0121 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0122
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the paste operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the paste operation(callback).
     */
    it('ActionInitiation_0122', 3, async function (done) {
      var caseCode = 'ActionInitiation_0122'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0122 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0140
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the cut operation(promise).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the cut operation(promise).
     */
    it('ActionInitiation_0140', 3, async function (done) {
      var caseCode = 'ActionInitiation_0140'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0140 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0141
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the cut operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the cut operation(callback).
     */
    it('ActionInitiation_0141', 3, async function (done) {
      var caseCode = 'ActionInitiation_0141'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0141 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0142
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the cut operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the cut operation(callback).
     */
    it('ActionInitiation_0142', 3, async function (done) {
      var caseCode = 'ActionInitiation_0142'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0142 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0160
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the setSelection operation(promise).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the setSelection operation(promise).
     */
    it('ActionInitiation_0160', 3, async function (done) {
      var caseCode = 'ActionInitiation_0160'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0160 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0161
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the setSelection operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the setSelection operation(callback).
     */
    it('ActionInitiation_0161', 3, async function (done) {
      var caseCode = 'ActionInitiation_0161'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0161 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0162
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the setSelection operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the setSelection operation(callback).
     */
    it('ActionInitiation_0162', 3, async function (done) {
      var caseCode = 'ActionInitiation_0162'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0162 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0180
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the setText operation(promise).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the setText operation(promise).
     */
    it('ActionInitiation_0180', 3, async function (done) {
      var caseCode = 'ActionInitiation_0180'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0180 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0181
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the setText operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the setText operation(callback).
     */
    it('ActionInitiation_0181', 3, async function (done) {
      var caseCode = 'ActionInitiation_0181'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0181 res: ' + data + ' expect assertTrue')
        done()
      })
    })
    /**
     * @tc.number: ActionInitiation_0182
     * @tc.name: The auxiliary application finds the specified control on the target application and triggers its execution of the setText operation(callback).
     * @tc.desc: The auxiliary application finds the specified control on the target application and triggers its execution of the setText operation(callback).
     */
    it('ActionInitiation_0182', 3, async function (done) {
      var caseCode = 'ActionInitiation_0182'
      publish(caseCode)
      ThreadSleep(TIME_OUT).then(() => {
        let data = result.get(caseCode)
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'ActionInitiation_0182 res: ' + data + ' expect assertTrue')
        done()
      })
    })
  })

  function enableAbility(logTag, bundleName) {
    config.enableAbility(bundleName, ['retrieve']).then((data) => {
      console.info(logTag + 'enableAbility success. data: ' + JSON.stringify(data))
    }).catch((error) => {
      console.info(logTag + 'enableAbility failed. Cause: ' + JSON.stringify(error))
      return
    })
  }

  function disableAbility(logTag, bundleName) {
    config.disableAbility(bundleName).then((data) => {
      console.info(logTag + 'disableAbility success. data: ' + JSON.stringify(data))
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
      if (err.code != 0) {
        console.info(LOG_PREFIX + caseName + ' failed to publish because ' + JSON.stringify(err))
        return
      }
      console.info(LOG_PREFIX + caseName + ' success publish')
      prompt.showToast({
        message: 'CASE ' + caseName
      })
    })
  }

}