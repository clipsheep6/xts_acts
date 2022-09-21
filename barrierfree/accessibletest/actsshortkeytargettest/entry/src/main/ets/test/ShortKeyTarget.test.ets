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
import prompt from '@system.prompt'
import config from '@ohos.accessibility.config'

const ASSIST_BUNDLE_NAME = 'com.example.test'
const LOG_PREFIX = '[CQH-CONFIG-SHORT-KEY-TARGET-TEST]'
const EVENT_NAME = 'on_target_change'
const T_EVENT_NAME_BACK = 'on_target_change_extra'
const TIME_OUT = 3000
const TIME_OUT_S = 1000
let CommonEventSubscribeInfo = {
  events: [T_EVENT_NAME_BACK]
}

export default function shortKeyTargetTest() {

  let subscriber = undefined
  let tarResult: Map<string, string> = new Map()

  describe('ActsShortkeyTargetTest', function () {
    beforeAll(async function (done) {
      subscriber = await commonEvent.createSubscriber(CommonEventSubscribeInfo)
      commonEvent.subscribe(subscriber, (error, commonEventData) => {
        if (error.code != 0) {
          console.info(LOG_PREFIX + 'subscribe callback error. Cause:' + JSON.stringify(error))
          return
        }
        console.info(LOG_PREFIX + 'subscribeTest callback : ' + JSON.stringify(commonEventData))
        tarResult.set(commonEventData.data, commonEventData.parameters.res)
      })
      setTimeout(() => {
        done()
      }, 1000)
    })
    afterEach(async function (done) {
      config.shortkeyTarget.off()
      setTimeout(() => done(), TIME_OUT_S)
    })
    afterAll(async function (done) {
      prompt.showToast({
        message: 'CASE ShortKeyTarget All End'
      })
      commonEvent.unsubscribe(subscriber)
      config.shortkeyTarget.set('none')
      done()
    })
    /**
     * @tc.number: RegisterShortkeyTarget_0010
     * @tc.name: Subscribe shortkeyTarget function and set shortkeyTarget ('com.example.test').
     * @tc.desc: Subscribe shortkeyTarget function and set shortkeyTarget ('com.example.test').
     */
    it('RegisterShortkeyTarget_0010', 1, function (done) {
      let caseCode = 'RegisterShortkeyTarget_0010'
      let res: string = undefined
      config.shortkeyTarget.set('ACEDED')
      setTimeout(() => {
        config.shortkeyTarget.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.on success: ' + JSON.stringify(data))
          res = data
        })
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + res + ' expect assertEqual')
          expect(tarData).assertEqual(res)
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: UnRegisterShortkeyTarget_0010
     * @tc.name: Unsubscribe shortkeyTarget function and set shortkeyTarget ('com.example.test').
     * @tc.desc: Unsubscribe shortkeyTarget function and set shortkeyTarget ('com.example.test').
     */
    it('UnRegisterShortkeyTarget_0010', 1, function (done) {
      let caseCode = 'UnRegisterShortkeyTarget_0010'
      let res: string = undefined
      config.shortkeyTarget.on((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.on success: ' + JSON.stringify(data))
        res = data
      })
      setTimeout(() => {
        config.shortkeyTarget.off()
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + res + ' expect assertEqual')
          expect(tarData).assertEqual(ASSIST_BUNDLE_NAME)
          expect(res).assertUndefined()
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: SetGetShortkeyTarget_0010
     * @tc.name: After setting the shortkeyTarget ('com.example.test'), get shortkeyTarget value. (callback)
     * @tc.desc: After setting the shortkeyTarget ('com.example.test'), get shortkeyTarget value. (callback)
     */
    it('SetGetShortkeyTarget_0010', 1, function (done) {
      let caseCode = 'SetGetShortkeyTarget_0010'
      config.shortkeyTarget.set(ASSIST_BUNDLE_NAME, (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set callback success')
        publish(caseCode)
      })
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertEqual')
        expect(tarData).assertEqual(ASSIST_BUNDLE_NAME)
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetGetShortkeyTarget_0020
     * @tc.name: After setting the shortkeyTarget ('com.example.test'), get shortkeyTarget value. (promise)
     * @tc.desc: After setting the shortkeyTarget ('com.example.test'), get shortkeyTarget value. (promise)
     */
    it('SetGetShortkeyTarget_0020', 1, function (done) {
      let caseCode = 'SetGetShortkeyTarget_0020'
      config.shortkeyTarget.set(ASSIST_BUNDLE_NAME)
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set promise success')
          publish(caseCode)
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set promise failed: ' + JSON.stringify(error))
        })
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertEqual')
        expect(tarData).assertEqual(ASSIST_BUNDLE_NAME)
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetGetShortkeyTarget_0030
     * @tc.name: Order setting the shortkeyTarget ('ACEDED','sesesese', 'com.example.test'), get shortkeyTarget value.
     * @tc.desc: Order setting the shortkeyTarget ('ACEDED','sesesese', 'com.example.test'), get shortkeyTarget value.
     */
    it('SetGetShortkeyTarget_0030', 1, function (done) {
      let caseCode = 'SetGetShortkeyTarget_0030'
      config.shortkeyTarget.set('ACEDED')
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set 1 promise success')
          config.shortkeyTarget.set('sesesese')
            .then(() => {
              console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set 2 promise success')
              config.shortkeyTarget.set(ASSIST_BUNDLE_NAME)
                .then(() => {
                  console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set 3 promise success')
                  publish(caseCode)
                })
                .catch((error) => {
                  console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set 3 promise failed: ' + JSON.stringify(error))
                })
            })
            .catch((error) => {
              console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set 2 promise failed: ' + JSON.stringify(error))
            })
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set 1 promise failed: ' + JSON.stringify(error))
        })
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertTrue')
        expect(tarData).assertEqual(ASSIST_BUNDLE_NAME)
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetGetShortkeyTarget_0040
     * @tc.name: After setting the shortkeyTarget ('a.a.c.d'), Subscribe shortkeyTarget function and set the shortkeyTarget ('com.exsample.test') for three consecutive times, and subscribers can only receive a callback (callback).
     * @tc.desc: After setting the shortkeyTarget ('a.a.c.d'), Subscribe shortkeyTarget function and set the shortkeyTarget ('com.exsample.test') for three consecutive times, and subscribers can only receive a callback (callback).
     */
    it('SetGetShortkeyTarget_0040', 3, function (done) {
      let caseCode = 'SetGetShortkeyTarget_0040'
      let res: string[] = []
      let param: string = 'a.a.c.d'
      config.shortkeyTarget.set(param, (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set callback success')
      })
      setTimeout(() => {
        config.shortkeyTarget.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.on success: ' + JSON.stringify(data))
          res.push(data)
        })
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + JSON.stringify(res) + ' expect assertEqual')
          expect(tarData).assertEqual('com.example.test')
          expect(res.length).assertEqual(1)
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: SetGetShortkeyTarget_0050
     * @tc.name: After setting the shortkeyTarget ('a.a.c.d'), Subscribe shortkeyTarget function and set the shortkeyTarget ('com.exsample.test') for three consecutive times, and subscribers can only receive a callback (promise).
     * @tc.desc: After setting the shortkeyTarget ('a.a.c.d'), Subscribe shortkeyTarget function and set the shortkeyTarget ('com.exsample.test') for three consecutive times, and subscribers can only receive a callback (promise).
     */
    it('SetGetShortkeyTarget_0050', 3, function (done) {
      let caseCode = 'SetGetShortkeyTarget_0050'
      let res: string[] = []
      let param: string = 'a.a.c.d'
      config.shortkeyTarget.set(param)
      setTimeout(() => {
        config.shortkeyTarget.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.on success: ' + JSON.stringify(data))
          res.push(data)
        })
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + JSON.stringify(res) + ' expect assertEqual')
          expect(tarData).assertEqual('com.example.test')
          expect(res.length).assertEqual(1)
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: SetErrorShortkeyTarget_0010
     * @tc.name: When setting the shortkeyTarget (undefined), the setting fails. (callback)
     * @tc.desc: When setting the shortkeyTarget (undefined), the setting fails. (callback)
     */
    it('SetErrorShortkeyTarget_0010', 2, function (done) {
      let caseCode = 'SetErrorShortkeyTarget_0010'
      let res: boolean = true
      config.shortkeyTarget.set(undefined, (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set callback failed: ' + JSON.stringify(err))
          res = false
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set callback success')
      })
      setTimeout(() => {
        expect(res).assertFalse()
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetErrorShortkeyTarget_0020
     * @tc.name: When setting the mouseAutoClick (""), the setting fails. (callback)
     * @tc.desc: When setting the mouseAutoClick (""), the setting fails. (callback)
     */
    it('SetErrorShortkeyTarget_0020', 2, function (done) {
      let caseCode = 'SetErrorShortkeyTarget_0020'
      let res: boolean = true
      config.shortkeyTarget.set('', (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set callback failed: ' + JSON.stringify(err))
          res = false
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set callback success')
      })
      setTimeout(() => {
        expect(res).assertFalse()
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetErrorShortkeyTarget_0030
     * @tc.name: When setting the shortkeyTarget (undefined), the setting fails. (promise)
     * @tc.desc: When setting the shortkeyTarget (undefined), the setting fails. (promise)
     */
    it('SetErrorShortkeyTarget_0030', 2, function (done) {
      let caseCode = 'SetErrorShortkeyTarget_0030'
      let res: boolean = true
      config.shortkeyTarget.set(undefined)
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set promise success')
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set promise failed: ' + JSON.stringify(error))
          res = false
        })
      setTimeout(() => {
        expect(res).assertFalse()
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetErrorShortkeyTarget_0040
     * @tc.name:
     * @tc.desc:
     */
    it('SetErrorShortkeyTarget_0040', 2, function (done) {
      let caseCode = 'SetErrorShortkeyTarget_0040'
      let res: boolean = true
      config.shortkeyTarget.set('')
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set promise success')
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set promise failed: ' + JSON.stringify(error))
          res = false
        })
      setTimeout(() => {
        expect(res).assertFalse()
        done()
      }, TIME_OUT)
    })
  })

  function publish(caseCode) {
    let commonEventPublishData = {
      data: caseCode
    }
    try {
      commonEvent.publish(EVENT_NAME, commonEventPublishData, (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' failed to publish because ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' success publish')
        prompt.showToast({
          message: 'CASE ' + caseCode
        })
      })
    } catch (e) {
      console.info(LOG_PREFIX + caseCode + ' error to publish because ' + JSON.stringify(e))
    }
  }
}