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

const LOG_PREFIX = '[CQH-CONFIG-MOUSE-AUTO-CLICK-TEST]'
const EVENT_NAME = 'on_target_change'
const T_EVENT_NAME_BACK = 'on_target_change_extra'
const TIME_OUT = 3000
const TIME_OUT_S = 1000
let CommonEventSubscribeInfo = {
  events: [T_EVENT_NAME_BACK]
}

export default function mouseAutoClickTest() {

  let subscriber = undefined
  let tarResult: Map<string, number> = new Map()

  describe('ActsMouseAutoClickTest', function () {
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
      config.mouseAutoClick.off()
      setTimeout(() => done(), TIME_OUT_S)
    })
    afterAll(async function (done) {
      commonEvent.unsubscribe(subscriber)
      config.mouseAutoClick.set(-1)
      done()
    })
    /**
     * @tc.number: RegisterMouseAutoClick_0010
     * @tc.name: Subscribe mouseAutoClick function and set mouseAutoClick (-1).
     * @tc.desc: Subscribe mouseAutoClick function and set mouseAutoClick (-1).
     */
    it('RegisterMouseAutoClick_0010', 1, function (done) {
      let caseCode = 'RegisterMouseAutoClick_0010'
      let res: number = undefined
      let param: number = 0
      config.mouseAutoClick.set(param)
      setTimeout(() => {
        config.mouseAutoClick.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.on success: ' + JSON.stringify(data))
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
     * @tc.number: RegisterMouseAutoClick_0020
     * @tc.name: Subscribe mouseAutoClick function and set mouseAutoClick (0).
     * @tc.desc: Subscribe mouseAutoClick function and set mouseAutoClick (0).
     */
    it('RegisterMouseAutoClick_0020', 1, function (done) {
      let caseCode = 'RegisterMouseAutoClick_0020'
      let res: number = undefined
      let param: number = -1
      config.mouseAutoClick.set(param)
      setTimeout(() => {
        config.mouseAutoClick.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.on success: ' + JSON.stringify(data))
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
     * @tc.number: RegisterMouseAutoClick_0030
     * @tc.name: Subscribe mouseAutoClick function and set mouseAutoClick (5000).
     * @tc.desc: Subscribe mouseAutoClick function and set mouseAutoClick (5000).
     */
    it('RegisterMouseAutoClick_0030', 1, function (done) {
      let caseCode = 'RegisterMouseAutoClick_0030'
      let res: number = undefined
      let param: number = -1
      config.mouseAutoClick.set(param)
      setTimeout(() => {
        config.mouseAutoClick.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.on success: ' + JSON.stringify(data))
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
     * @tc.number: RegisterMouseAutoClick_0040
     * @tc.name: Subscribe mouseAutoClick function and set mouseAutoClick (10000).
     * @tc.desc: Subscribe mouseAutoClick function and set mouseAutoClick (10000).
     */
    it('RegisterMouseAutoClick_0040', 1, function (done) {
      let caseCode = 'RegisterMouseAutoClick_0040'
      let res: number = undefined
      let param: number = -1
      config.mouseAutoClick.set(param)
      setTimeout(() => {
        config.mouseAutoClick.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.on success: ' + JSON.stringify(data))
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
     * @tc.number: UnRegisterMouseAutoClick_0010
     * @tc.name: Unsubscribe mouseAutoClick function and set mouseAutoClick (-1).
     * @tc.desc: Unsubscribe mouseAutoClick function and set mouseAutoClick (-1).
     */
    it('UnRegisterMouseAutoClick_0010', 1, function (done) {
      let caseCode = 'UnRegisterMouseAutoClick_0010'
      let res: number = undefined
      config.mouseAutoClick.on((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.on success: ' + JSON.stringify(data))
        res = data
      })
      setTimeout(() => {
        config.mouseAutoClick.off()
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + res + ' expect assertEqual')
          expect(tarData).assertEqual(-1)
          expect(res).assertUndefined()
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: UnRegisterMouseAutoClick_0020
     * @tc.name: Unsubscribe mouseAutoClick function and set mouseAutoClick (0).
     * @tc.desc: Unsubscribe mouseAutoClick function and set mouseAutoClick (0).
     */
    it('UnRegisterMouseAutoClick_0020', 1, function (done) {
      let caseCode = 'UnRegisterMouseAutoClick_0020'
      let res: number = undefined
      config.mouseAutoClick.on((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.on success: ' + JSON.stringify(data))
        res = data
      })
      setTimeout(() => {
        config.mouseAutoClick.off()
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + res + ' expect assertEqual')
          expect(tarData).assertEqual(0)
          expect(res).assertUndefined()
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: UnRegisterMouseAutoClick_0030
     * @tc.name: Unsubscribe mouseAutoClick function and set mouseAutoClick (5000).
     * @tc.desc: Unsubscribe mouseAutoClick function and set mouseAutoClick (5000).
     */
    it('UnRegisterMouseAutoClick_0030', 1, function (done) {
      let caseCode = 'UnRegisterMouseAutoClick_0030'
      let res: number = undefined
      config.mouseAutoClick.on((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.on success: ' + JSON.stringify(data))
        res = data
      })
      setTimeout(() => {
        config.mouseAutoClick.off()
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + res + ' expect assertEqual')
          expect(tarData).assertEqual(5000)
          expect(res).assertUndefined()
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: UnRegisterMouseAutoClick_0040
     * @tc.name: Unsubscribe mouseAutoClick function and set mouseAutoClick (10000).
     * @tc.desc: Unsubscribe mouseAutoClick function and set mouseAutoClick (10000).
     */
    it('UnRegisterMouseAutoClick_0040', 1, function (done) {
      let caseCode = 'UnRegisterMouseAutoClick_0040'
      let res: number = undefined
      config.mouseAutoClick.on((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.on success: ' + JSON.stringify(data))
        res = data
      })
      setTimeout(() => {
        config.mouseAutoClick.off()
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + res + ' expect assertEqual')
          expect(tarData).assertEqual(10000)
          expect(res).assertUndefined()
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: SetGetMouseAutoClick_0010
     * @tc.name: After setting the mouseAutoClick (-1), get mouseAutoClick value. (callback)
     * @tc.desc: After setting the mouseAutoClick (-1), get mouseAutoClick value. (callback)
     */
    it('SetGetMouseAutoClick_0010', 1, function (done) {
      let caseCode = 'SetGetMouseAutoClick_0010'
      let param: number = -1
      config.mouseAutoClick.set(param, (err) => {
        if (err && err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set callback success')
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
     * @tc.number: SetGetMouseAutoClick_0020
     * @tc.name: After setting the mouseAutoClick (0), get mouseAutoClick value. (callback)
     * @tc.desc: After setting the mouseAutoClick (0), get mouseAutoClick value. (callback)
     */
    it('SetGetMouseAutoClick_0020', 1, function (done) {
      let caseCode = 'SetGetMouseAutoClick_0020'
      let param: number = 0
      config.mouseAutoClick.set(param, (err) => {
        if (err && err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set callback success')
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
     * @tc.number: SetGetMouseAutoClick_0030
     * @tc.name: After setting the mouseAutoClick (5000), get mouseAutoClick value. (callback)
     * @tc.desc: After setting the mouseAutoClick (5000), get mouseAutoClick value. (callback)
     */
    it('SetGetMouseAutoClick_0030', 1, function (done) {
      let caseCode = 'SetGetMouseAutoClick_0030'
      let param: number = 5000
      config.mouseAutoClick.set(param, (err) => {
        if (err && err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set callback success')
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
     * @tc.number: SetGetMouseAutoClick_0040
     * @tc.name: After setting the mouseAutoClick (10000), get mouseAutoClick value. (callback)
     * @tc.desc: After setting the mouseAutoClick (10000), get mouseAutoClick value. (callback)
     */
    it('SetGetMouseAutoClick_0040', 1, function (done) {
      let caseCode = 'SetGetMouseAutoClick_0040'
      let param: number = 10000
      config.mouseAutoClick.set(param, (err) => {
        if (err && err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set callback success')
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
     * @tc.number: SetGetMouseAutoClick_0050
     * @tc.name: After setting the mouseAutoClick (-1), get mouseAutoClick value. (promise)
     * @tc.desc: After setting the mouseAutoClick (-1), get mouseAutoClick value. (promise)
     */
    it('SetGetMouseAutoClick_0050', 1, function (done) {
      let caseCode = 'SetGetMouseAutoClick_0050'
      let param: number = -1
      config.mouseAutoClick.set(param)
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set promise success')
          publish(caseCode)
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set promise failed: ' + JSON.stringify(error))
        })
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertEqual')
        expect(tarData).assertEqual(param)
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetGetMouseAutoClick_0060
     * @tc.name: After setting the mouseAutoClick (0), get mouseAutoClick value. (promise)
     * @tc.desc: After setting the mouseAutoClick (0), get mouseAutoClick value. (promise)
     */
    it('SetGetMouseAutoClick_0060', 1, function (done) {
      let caseCode = 'SetGetMouseAutoClick_0060'
      let param: number = 0
      config.mouseAutoClick.set(param)
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set promise success')
          publish(caseCode)
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set promise failed: ' + JSON.stringify(error))
        })
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertEqual')
        expect(tarData).assertEqual(param)
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetGetMouseAutoClick_0070
     * @tc.name: After setting the mouseAutoClick (5000), get mouseAutoClick value. (promise)
     * @tc.desc: After setting the mouseAutoClick (5000), get mouseAutoClick value. (promise)
     */
    it('SetGetMouseAutoClick_0070', 1, function (done) {
      let caseCode = 'SetGetMouseAutoClick_0070'
      let param: number = 5000
      config.mouseAutoClick.set(param)
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set promise success')
          publish(caseCode)
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set promise failed: ' + JSON.stringify(error))
        })
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertEqual')
        expect(tarData).assertEqual(param)
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetGetMouseAutoClick_0080
     * @tc.name: After setting the mouseAutoClick (10000), get mouseAutoClick value. (promise)
     * @tc.desc: After setting the mouseAutoClick (10000), get mouseAutoClick value. (promise)
     */
    it('SetGetMouseAutoClick_0080', 1, function (done) {
      let caseCode = 'SetGetMouseAutoClick_0080'
      let param: number = 10000
      config.mouseAutoClick.set(param)
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set promise success')
          publish(caseCode)
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set promise failed: ' + JSON.stringify(error))
        })
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertEqual')
        expect(tarData).assertEqual(param)
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetGetMouseAutoClick_0090
     * @tc.name: Order setting the mouseAutoClick (-1, 0, 5000, 10000), get mouseAutoClick value.
     * @tc.desc: Order setting the mouseAutoClick (-1, 0, 5000, 10000), get mouseAutoClick value.
     */
    it('SetGetMouseAutoClick_0090', 3, function (done) {
      let caseCode = 'SetGetMouseAutoClick_0090'
      config.mouseAutoClick.set(-1)
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set 1 promise success')
          config.mouseAutoClick.set(0)
            .then(() => {
              console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set 2 promise success')
              config.mouseAutoClick.set(5000)
                .then(() => {
                  console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set 3 promise success')
                  config.mouseAutoClick.set(10000)
                    .then(() => {
                      console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set 4 promise success')
                      publish(caseCode)
                    })
                    .catch((error) => {
                      console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set 4 promise failed: ' + JSON.stringify(error))
                    })
                })
                .catch((error) => {
                  console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set 3 promise failed: ' + JSON.stringify(error))
                })
            })
            .catch((error) => {
              console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set 2 promise failed: ' + JSON.stringify(error))
            })
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set 1 promise failed: ' + JSON.stringify(error))
        })
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertEqual')
        expect(tarData).assertEqual(10000)
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetGetMouseAutoClick_0100
     * @tc.name: After setting the mouseAutoClick (-1), Subscribe mouseAutoClick function and set the mouseAutoClick (0) for three consecutive times, and subscribers can only receive a callback (callback).
     * @tc.desc: After setting the mouseAutoClick (-1), Subscribe mouseAutoClick function and set the mouseAutoClick (0) for three consecutive times, and subscribers can only receive a callback (callback).
     */
    it('SetGetMouseAutoClick_0100', 3, function (done) {
      let caseCode = 'SetGetMouseAutoClick_0100'
      let res: number[] = []
      let param: number = -1
      config.mouseAutoClick.set(param, (err) => {
        if (err && err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set callback success')
      })
      setTimeout(() => {
        config.mouseAutoClick.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.on success: ' + JSON.stringify(data))
          res.push(data)
        })
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + JSON.stringify(res) + ' expect assertEqual')
          expect(tarData).assertEqual(0)
          expect(res.length).assertEqual(1)
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: SetGetMouseAutoClick_0110
     * @tc.name: After setting the mouseAutoClick (-1), Subscribe mouseAutoClick function and set the mouseAutoClick (0) for three consecutive times, and subscribers can only receive a callback (promise).
     * @tc.desc: After setting the mouseAutoClick (-1), Subscribe mouseAutoClick function and set the mouseAutoClick (0) for three consecutive times, and subscribers can only receive a callback (promise).
     */
    it('SetGetMouseAutoClick_0110', 3, function (done) {
      let caseCode = 'SetGetMouseAutoClick_0110'
      let res: number[] = []
      let param: number = -1
      config.mouseAutoClick.set(param)
      setTimeout(() => {
        config.mouseAutoClick.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.on success: ' + JSON.stringify(data))
          res.push(data)
        })
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + JSON.stringify(res) + ' expect assertEqual')
          expect(tarData).assertEqual(0)
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
