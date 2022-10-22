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

const LOG_PREFIX = '[CQH-CONFIG-SHORT-KEY-TEST]'
const EVENT_NAME = 'on_target_change'
const T_EVENT_NAME_BACK = 'on_target_change_extra'
const TIME_OUT = 3000
const TIME_OUT_S = 1000
let CommonEventSubscribeInfo = {
  events: [T_EVENT_NAME_BACK]
}

export default function shortKeyTest() {

  let subscriber = undefined
  let tarResult: Map<string, boolean> = new Map()

  describe('ActsShortkeyTest', function () {
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
      }, TIME_OUT_S)
    })
    afterEach(async function (done) {
      config.shortkey.off()
      setTimeout(() => done(), TIME_OUT_S)
    })
    afterAll(async function (done) {
      prompt.showToast({
        message: 'CASE ShortKey All End'
      })
      commonEvent.unsubscribe(subscriber)
      config.shortkey.set(false)
      done()
    })
    /**
     * @tc.number: RegisterShortkey_0010
     * @tc.name: Subscribe shortkey function and set shortkey (true).
     * @tc.desc: Subscribe shortkey function and set shortkey (true).
     */
    it('RegisterShortkey_0010', 1, function (done) {
      let caseCode = 'RegisterShortkey_0010'
      let res: boolean = undefined
      config.shortkey.set(false)
      setTimeout(() => {
        config.shortkey.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.on success: ' + JSON.stringify(data))
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
     * @tc.number: RegisterShortkey_0020
     * @tc.name: Subscribe shortkey function and set shortkey (false).
     * @tc.desc: Subscribe shortkey function and set shortkey (false).
     */
    it('RegisterShortkey_0020', 1, function (done) {
      let caseCode = 'RegisterShortkey_0020'
      let res: boolean = undefined
      config.shortkey.set(true, (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.shortkey.set callback success')
      })
      config.shortkey.on((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.shortkey.on success: ' + JSON.stringify(data))
        res = data
      })
      publish(caseCode)
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + res + ' expect assertEqual')
        expect(tarData).assertEqual(res)
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: UnRegisterShortkey_0010
     * @tc.name: Unsubscribe shortkey function and set shortkey (false).
     * @tc.desc: Unsubscribe shortkey function and set shortkey (false).
     */
    it('UnRegisterShortkey_0010', 1, function (done) {
      let caseCode = 'UnRegisterShortkey_0010'
      let res: boolean = undefined
      config.shortkey.set(false, (err) => {
        if (err.code != 0) {
          console.error(LOG_PREFIX + caseCode + ' config.shortkey.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.error(LOG_PREFIX + caseCode + ' config.shortkey.set callback success')
      })
      config.shortkey.on((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.shortkey.on success: ' + JSON.stringify(data))
        res = data
      })
      setTimeout(() => {
        config.shortkey.off()
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + res + ' expect assertEqual')
          expect(tarData).assertTrue()
          expect(res).assertUndefined()
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: UnRegisterShortkey_0020
     * @tc.name: Unsubscribe shortkey function and set shortkey (true).
     * @tc.desc: Unsubscribe shortkey function and set shortkey (true).
     */
    it('UnRegisterShortkey_0020', 1, function (done) {
      let caseCode = 'UnRegisterShortkey_0020'
      let res: boolean = undefined
      config.shortkey.set(true, (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.shortkey.set callback success')
      })
      config.shortkey.on((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.shortkey.on success: ' + JSON.stringify(data))
        res = data
      })
      setTimeout(() => {
        config.shortkey.off()
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + res + ' expect assertEqual')
          expect(tarData).assertFalse()
          expect(res).assertUndefined()
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: SetGetShortkey_0010
     * @tc.name: After setting the shortkey (true), get shortkey value. (callback)
     * @tc.desc: After setting the shortkey (true), get shortkey value. (callback)
     */
    it('SetGetShortkey_0010', 1, function (done) {
      let caseCode = 'SetGetShortkey_0010'
      let param: boolean = true
      config.shortkey.set(param, (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.shortkey.set callback success')
        publish(caseCode)
      })
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertEqual')
        expect(tarData).assertEqual(param)
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetGetShortkey_0020
     * @tc.name: After setting the shortkey (false), get shortkey value. (callback)
     * @tc.desc: After setting the shortkey (false), get shortkey value. (callback)
     */
    it('SetGetShortkey_0020', 1, function (done) {
      let caseCode = 'SetGetShortkey_0020'
      let param: boolean = false
      config.shortkey.set(param, (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.shortkey.set callback success')
        publish(caseCode)
      })
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertEqual')
        expect(tarData).assertEqual(param)
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetGetShortkey_0030
     * @tc.name: After setting the shortkey (true), get shortkey value. (promise)
     * @tc.desc: After setting the shortkey (true), get shortkey value. (promise)
     */
    it('SetGetShortkey_0030', 1, function (done) {
      let caseCode = 'SetGetShortkey_0030'
      let param: boolean = true
      config.shortkey.set(param)
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.set promise success')
          publish(caseCode)
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.set promise failed: ' + JSON.stringify(error))
        })
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertEqual')
        expect(tarData).assertEqual(param)
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetGetShortkey_0040
     * @tc.name: After setting the shortkey (false), get shortkey value. (promise)
     * @tc.desc: After setting the shortkey (false), get shortkey value. (promise)
     */
    it('SetGetShortkey_0040', 1, function (done) {
      let caseCode = 'SetGetShortkey_0040'
      let param: boolean = false
      config.shortkey.set(param)
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.set promise success')
          publish(caseCode)
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.set promise failed: ' + JSON.stringify(error))
        })
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertEqual')
        expect(tarData).assertEqual(param)
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetGetShortkey_0050
     * @tc.name: Order setting the shortkey (true, false, true), get mouseKey value.
     * @tc.desc: Order setting the shortkey (true, false, true), get mouseKey value.
     */
    it('SetGetShortkey_0050', 3, function (done) {
      let caseCode = 'SetGetShortkey_0050'
      config.shortkey.set(true)
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.set 1 promise success')
          config.shortkey.set(false)
            .then(() => {
              console.info(LOG_PREFIX + caseCode + ' config.shortkey.set 2 promise success')
              config.shortkey.set(true)
                .then(() => {
                  console.info(LOG_PREFIX + caseCode + ' config.shortkey.set 3 promise success')
                  publish(caseCode)
                })
                .catch((error) => {
                  console.info(LOG_PREFIX + caseCode + ' config.shortkey.set 3 promise failed: ' + JSON.stringify(error))
                })
            })
            .catch((error) => {
              console.info(LOG_PREFIX + caseCode + ' config.shortkey.set 2 promise failed: ' + JSON.stringify(error))
            })
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.set 1 promise failed: ' + JSON.stringify(error))
        })
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertTrue')
        expect(tarData).assertTrue()
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetGetShortkey_0060
     * @tc.name: After setting the shortkey (false), Subscribe shortkey function and set the shortkey (true) for three consecutive times, and subscribers can only receive a callback (callback).
     * @tc.desc: After setting the shortkey (false), Subscribe shortkey function and set the shortkey (true) for three consecutive times, and subscribers can only receive a callback (callback).
     */
    it('SetGetShortkey_0060', 3, function (done) {
      let caseCode = 'SetGetShortkey_0060'
      let res: boolean[] = []
      config.shortkey.set(false, (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.shortkey.set callback success')
      })
      setTimeout(() => {
        config.shortkey.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.on success: ' + JSON.stringify(data))
          res.push(data)
        })
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + res + ' expect assertTrue')
          expect(tarData).assertTrue()
          expect(res.length).assertEqual(1)
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: SetGetShortkey_0070
     * @tc.name: After setting the shortkey (true), Subscribe shortkey function and set the shortkey (false) for three consecutive times, and subscribers can only receive a callback (callback).
     * @tc.desc: After setting the shortkey (true), Subscribe shortkey function and set the shortkey (false) for three consecutive times, and subscribers can only receive a callback (callback).
     */
    it('SetGetShortkey_0070', 3, function (done) {
      let caseCode = 'SetGetShortkey_0070'
      let res: boolean[] = []
      config.shortkey.set(true, (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.shortkey.set callback success')
      })
      setTimeout(() => {
        config.shortkey.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.on success: ' + JSON.stringify(data))
          res.push(data)
        })
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + res + ' expect assertFalse')
          expect(tarData).assertFalse()
          expect(res.length).assertEqual(1)
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: SetGetShortkey_0080
     * @tc.name: After setting the shortkey (false), Subscribe shortkey function and set the shortkey (true) for three consecutive times, and subscribers can only receive a callback (promise).
     * @tc.desc: After setting the shortkey (false), Subscribe shortkey function and set the shortkey (true ) for three consecutive times, and subscribers can only receive a callback (promise).
     */
    it('SetGetShortkey_0080', 3, function (done) {
      let caseCode = 'SetGetShortkey_0080'
      let res: boolean[] = []
      config.shortkey.set(false)
      setTimeout(() => {
        config.shortkey.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.on success: ' + JSON.stringify(data))
          res.push(data)
        })
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + res + ' expect assertTrue')
          expect(tarData).assertTrue()
          expect(res.length).assertEqual(1)
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: SetGetShortkey_0090
     * @tc.name: After setting the shortkey (true), Subscribe shortkey function and set the shortkey (false) for three consecutive times, and subscribers can only receive a callback (promise).
     * @tc.desc: After setting the shortkey (true), Subscribe shortkey function and set the shortkey (false) for three consecutive times, and subscribers can only receive a callback (promise).
     */
    it('SetGetShortkey_0090', 3, function (done) {
      let caseCode = 'SetGetShortkey_0090'
      let res: boolean[] = []
      config.shortkey.set(true)
      setTimeout(() => {
        config.shortkey.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.on success: ' + JSON.stringify(data))
          res.push(data)
        })
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + res + ' expect assertFalse')
          expect(tarData).assertFalse()
          expect(res.length).assertEqual(1)
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: SetErrorShortkey_0010
     * @tc.name: When setting the shortkey (undefined), the setting fails. (callback)
     * @tc.desc: When setting the shortkey (undefined), the setting fails. (callback)
     */
    it('SetErrorShortkey_0010', 2, function (done) {
      let caseCode = 'SetErrorShortkey_0010'
      let res: boolean = true
      config.shortkey.set(undefined, (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.set callback failed: ' + JSON.stringify(err))
          res = false
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.shortkey.set callback success')
      })
      setTimeout(() => {
        expect(res).assertFalse()
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetErrorShortkey_0030
     * @tc.name: When setting the shortkey (undefined), the setting fails. (promise)
     * @tc.desc: When setting the shortkey (undefined), the setting fails. (promise)
     */
    it('SetErrorShortkey_0030', 2, function (done) {
      let caseCode = 'SetErrorShortkey_0030'
      let res: boolean = true
      config.shortkey.set(undefined)
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.set promise success')
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.set promise failed: ' + JSON.stringify(error))
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
