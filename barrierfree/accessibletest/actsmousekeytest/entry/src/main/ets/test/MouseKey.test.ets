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

const LOG_PREFIX = '[CQH-CONFIG-MOUSE-KEY-TEST]'
const EVENT_NAME = 'on_target_change'
const T_EVENT_NAME_BACK = 'on_target_change_extra'
const TIME_OUT = 3000
const TIME_OUT_S = 1000
let CommonEventSubscribeInfo = {
  events: [T_EVENT_NAME_BACK]
}

export default function mouseKeyTest() {

  let subscriber = undefined
  let tarResult: Map<string, boolean> = new Map()

  describe('ActsMouseKeyTest', function () {
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
      config.mouseKey.off()
      setTimeout(() => done(), TIME_OUT_S)
    })
    afterAll(async function (done) {
      commonEvent.unsubscribe(subscriber)
      config.mouseKey.set(false)
      done()
    })
    /**
     * @tc.number: RegisterMouseKey_0020
     * @tc.name: Subscribe mouseKey function and set mouseKey (false).
     * @tc.desc: Subscribe mouseKey function and set mouseKey (false).
     */
    it('RegisterMouseKey_0020', 1, function (done) {
      let caseCode = 'RegisterMouseKey_0020'
      let res: boolean = undefined
      config.mouseKey.set(true, (err) => {
        if (err && err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set callback success')
      })
      setTimeout(() => {
        config.mouseKey.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.on success: ' + JSON.stringify(data))
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
     * @tc.number: RegisterMouseKey_0010
     * @tc.name: Subscribe mouseKey function and set mouseKey (true).
     * @tc.desc: Subscribe mouseKey function and set mouseKey (true).
     */
    it('RegisterMouseKey_0010', 1, function (done) {
      let caseCode = 'RegisterMouseKey_0010'
      let res: boolean = undefined
      config.mouseKey.on((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.mouseKey.on success: ' + JSON.stringify(data))
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
     * @tc.number: UnRegisterMouseKey_0010
     * @tc.name: Unsubscribe mouseKey function and set mouseKey (true).
     * @tc.desc: Unsubscribe mouseKey function and set mouseKey (true).
     */
    it('UnRegisterMouseKey_0010', 1, function (done) {
      let caseCode = 'UnRegisterMouseKey_0010'
      let res: boolean = undefined
      config.mouseKey.on((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.mouseKey.on success: ' + JSON.stringify(data))
        res = data
      })
      setTimeout(() => {
        config.mouseKey.off()
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
     * @tc.number: UnRegisterMouseKey_0020
     * @tc.name: Unsubscribe mouseKey function and set mouseKey (false).
     * @tc.desc: Unsubscribe mouseKey function and set mouseKey (false).
     */
    it('UnRegisterMouseKey_0020', 1, function (done) {
      let caseCode = 'UnRegisterMouseKey_0020'
      let res: boolean = undefined
      config.mouseKey.set(true, (err, data) => {
        if (err && err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set callback success')
      })
      config.mouseKey.on((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.mouseKey.on success: ' + JSON.stringify(data))
        res = data
      })
      setTimeout(() => {
        config.mouseKey.off()
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
     * @tc.number: UnRegisterMouseKey_0030
     * @tc.name: Unsubscribe mouseKey function and set mouseKey (false).
     * @tc.desc: Unsubscribe mouseKey function and set mouseKey (false).
     */
    it('UnRegisterMouseKey_0030', 1, function (done) {
      let caseCode = 'UnRegisterMouseKey_0030'
      let res: boolean = undefined
      let resTwo: boolean = undefined
      const callbackData = (data) => {
        console.info(LOG_PREFIX + caseCode + ' config.mouseKey.on one success: ' + JSON.stringify(data))
        res = data
      }
      const callbackDataTwo = (data) => {
    	console.info(LOG_PREFIX + caseCode + ' config.mouseKey.on two success: ' + JSON.stringify(data))
    	resTwo = data
      }
      config.mouseKey.set(true, (err, data) => {
        if (err && err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set callback success')
      })
      setTimeout(() => {
        config.mouseKey.on(callbackData)
        config.mouseKey.on(callbackDataTwo)
        config.mouseKey.off(callbackData)
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertFalse')
          console.info(LOG_PREFIX + caseCode + ' res: ' + res + ' expect assertUndefined')
          console.info(LOG_PREFIX + caseCode + ' resTwo: ' + resTwo + ' expect assertFalse')
          expect(tarData).assertFalse()
          expect(res).assertUndefined()
          expect(resTwo).assertFalse()
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: UnRegisterMouseKey_0040
     * @tc.name: Unsubscribe mouseKey function and set mouseKey (true).
     * @tc.desc: Unsubscribe mouseKey function and set mouseKey (true).
     */
    it('UnRegisterMouseKey_0040', 1, function (done) {
      let caseCode = 'UnRegisterMouseKey_0040'
      let res: boolean = undefined
      let resTwo: boolean = undefined
      const callbackData = (data) => {
    	console.info(LOG_PREFIX + caseCode + ' config.mouseKey.on one success: ' + JSON.stringify(data))
    	res = data
      }
      const callbackDataTwo = (data) => {
    	console.info(LOG_PREFIX + caseCode + ' config.mouseKey.on two success: ' + JSON.stringify(data))
    	resTwo = data
      }
      config.mouseKey.set(false, (err) => {
        if (err && err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set callback success')
      })
      setTimeout(() => {
        config.mouseKey.on(callbackData)
        config.mouseKey.on(callbackDataTwo)
        config.mouseKey.off(callbackData)
        config.mouseKey.off(callbackDataTwo)
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertTrue')
          console.info(LOG_PREFIX + caseCode + ' res: ' + res + ' expect assertUndefined')
          console.info(LOG_PREFIX + caseCode + ' resTwo: ' + resTwo + ' expect assertUndefined')
          expect(tarData).assertTrue()
          expect(res).assertUndefined()
          expect(resTwo).assertUndefined()
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: UnRegisterMouseKey_0050
     * @tc.name: Unsubscribe mouseKey function and set mouseKey (true).
     * @tc.desc: Unsubscribe mouseKey function and set mouseKey (true).
     */
    it('UnRegisterMouseKey_0050', 1, function (done) {
      let caseCode = 'UnRegisterMouseKey_0050'
      let res: boolean = undefined
      let resTwo: boolean = undefined
      const callbackData = (data) => {
    	console.info(LOG_PREFIX + caseCode + ' config.mouseKey.on one success: ' + JSON.stringify(data))
    	res = data
      }
      const callbackDataTwo = (data) => {
    	console.info(LOG_PREFIX + caseCode + ' config.mouseKey.on two success: ' + JSON.stringify(data))
    	resTwo = data
      }
      config.mouseKey.set(false, (err) => {
        if (err && err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set callback success')
      })
      setTimeout(() => {
        config.mouseKey.on(callbackData)
        config.mouseKey.on(callbackDataTwo)
        config.mouseKey.off()
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertTrue')
          console.info(LOG_PREFIX + caseCode + ' res: ' + res + ' expect assertUndefined')
          console.info(LOG_PREFIX + caseCode + ' resTwo: ' + resTwo + ' expect assertUndefined')
          expect(tarData).assertTrue()
          expect(res).assertUndefined()
          expect(resTwo).assertUndefined()
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: SetGetMouseKey_0010
     * @tc.name: After setting the mouseKey (true), get mouseKey value. (callback)
     * @tc.desc: After setting the mouseKey (true), get mouseKey value. (callback)
     */
    it('SetGetMouseKey_0010', 1, function (done) {
      let caseCode = 'SetGetMouseKey_0010'
      let param: boolean = true
      config.mouseKey.set(param, (err, data) => {
        if (err && err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set callback success')
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
     * @tc.number: SetGetMouseKey_0020
     * @tc.name: After setting the mouseKey (false), get mouseKey value. (callback)
     * @tc.desc: After setting the mouseKey (false), get mouseKey value. (callback)
     */
    it('SetGetMouseKey_0020', 1, function (done) {
      let caseCode = 'SetGetMouseKey_0020'
      let param: boolean = false
      config.mouseKey.set(param, (err, data) => {
        if (err && err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set callback success')
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
     * @tc.number: SetGetMouseKey_0030
     * @tc.name: After setting the mouseKey (true), get mouseKey value. (promise)
     * @tc.desc: After setting the mouseKey (true), get mouseKey value. (promise)
     */
    it('SetGetMouseKey_0030', 1, function (done) {
      let caseCode = 'SetGetMouseKey_0030'
      let param: boolean = true
      config.mouseKey.set(param)
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set promise success')
          publish(caseCode)
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set promise failed: ' + JSON.stringify(error))
        })
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertEqual')
        expect(tarData).assertEqual(param)
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetGetMouseKey_0040
     * @tc.name: After setting the mouseKey (false), get mouseKey value. (promise)
     * @tc.desc: After setting the mouseKey (false), get mouseKey value. (promise)
     */
    it('SetGetMouseKey_0040', 1, function (done) {
      let caseCode = 'SetGetMouseKey_0040'
      let param: boolean = false
      config.mouseKey.set(param)
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set promise success')
          publish(caseCode)
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set promise failed: ' + JSON.stringify(error))
        })
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertEqual')
        expect(tarData).assertEqual(param)
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetGetMouseKey_0050
     * @tc.name: Order setting the mouseKey (true, false, true), get mouseKey value.
     * @tc.desc: Order setting the mouseKey (true, false, true), get mouseKey value.
     */
    it('SetGetMouseKey_0050', 3, function (done) {
      let caseCode = 'SetGetMouseKey_0050'
      config.mouseKey.set(true)
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set 1 promise success')
          config.mouseKey.set(false)
            .then(() => {
              console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set 2 promise success')
              config.mouseKey.set(true)
                .then(() => {
                  console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set 3 promise success')
                  publish(caseCode)
                })
                .catch((error) => {
                  console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set 3 promise failed: ' + JSON.stringify(error))
                })
            })
            .catch((error) => {
              console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set 2 promise failed: ' + JSON.stringify(error))
            })
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set 1 promise failed: ' + JSON.stringify(error))
        })
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertTrue')
        expect(tarData).assertTrue()
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetGetMouseKey_0060
     * @tc.name: After setting the mouseKey (false), Subscribe mouseKey function and set the mouseKey (true) for three consecutive times, and subscribers can only receive a callback (callback).
     * @tc.desc: After setting the mouseKey (false), Subscribe mouseKey function and set the mouseKey (true) for three consecutive times, and subscribers can only receive a callback (callback).
     */
    it('SetGetMouseKey_0060', 3, function (done) {
      let caseCode = 'SetGetMouseKey_0060'
      let res: boolean[] = []
      config.mouseKey.set(false, (err) => {
        if (err && err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set callback success')
      })
      setTimeout(() => {
        config.mouseKey.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.on success: ' + JSON.stringify(data))
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
     * @tc.number: SetGetMouseKey_0070
     * @tc.name: After setting the mouseKey (true), Subscribe mouseKey function and set the mouseKey (false) for three consecutive times, and subscribers can only receive a callback (callback).
     * @tc.desc: After setting the mouseKey (true), Subscribe mouseKey function and set the mouseKey (false) for three consecutive times, and subscribers can only receive a callback (callback).
     */
    it('SetGetMouseKey_0070', 3, function (done) {
      let caseCode = 'SetGetMouseKey_0070'
      let res: boolean[] = []
      config.mouseKey.set(true, (err) => {
        if (err && err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set callback success')
      })
      setTimeout(() => {
        config.mouseKey.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.on success: ' + JSON.stringify(data))
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
     * @tc.number: SetGetMouseKey_0080
     * @tc.name: After setting the mouseKey (false), Subscribe mouseKey function and set the mouseKey (true) for three consecutive times, and subscribers can only receive a callback (promise).
     * @tc.desc: After setting the mouseKey (false), Subscribe mouseKey function and set the mouseKey (true) for three consecutive times, and subscribers can only receive a callback (promise).
     */
    it('SetGetMouseKey_0080', 3, function (done) {
      let caseCode = 'SetGetMouseKey_0080'
      let res: boolean[] = []
      config.mouseKey.set(false)
      setTimeout(() => {
        config.mouseKey.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.on success: ' + JSON.stringify(data))
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
     * @tc.number: SetGetMouseKey_0090
     * @tc.name: After setting the mouseKey (true), Subscribe mouseKey function and set the mouseKey (false) for three consecutive times, and subscribers can only receive a callback (promise).
     * @tc.desc: After setting the mouseKey (true), Subscribe mouseKey function and set the mouseKey (false) for three consecutive times, and subscribers can only receive a callback (promise).
     */
    it('SetGetMouseKey_0090', 3, function (done) {
      let caseCode = 'SetGetMouseKey_0090'
      let res: boolean[] = []
      config.mouseKey.set(true)
      setTimeout(() => {
        config.mouseKey.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.on success: ' + JSON.stringify(data))
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

  })

  function publish(caseCode) {
    let commonEventPublishData = {
      data: caseCode
    }
    try {
      commonEvent.publish(EVENT_NAME, commonEventPublishData, (err) => {
        if (err && err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' failed to publish because ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' success publish')
      })
    } catch (e) {
      console.info(LOG_PREFIX + caseCode + ' error to publish because ' + JSON.stringify(e))
    }
  }
}
