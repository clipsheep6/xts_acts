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

const LOG_PREFIX = '[CQH-CONFIG-AUDIO-BALANCE-TEST]'
const EVENT_NAME = 'on_target_change'
const T_EVENT_NAME_BACK = 'on_target_change_extra'
const TIME_OUT = 3000
const TIME_OUT_S = 1000
let CommonEventSubscribeInfo = {
  events: [T_EVENT_NAME_BACK]
}

export default function audioBalanceTest() {

  let subscriber = undefined
  let tarResult: Map<string, number> = new Map()

  describe('ActsAudioBalanceTest', function () {
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
      config.audioBalance.off()
      setTimeout(() => done(), TIME_OUT_S)
    })
    afterAll(async function (done) {
      prompt.showToast({
        message: 'CASE AudioBalance All End'
      })
      commonEvent.unsubscribe(subscriber)
      config.audioBalance.set(0)
      done()
    })
    /**
     * @tc.number: RegisterAudioBalance_0010
     * @tc.name: Subscribe audioBalance function and set the auxiliary function of audioBalance (0).
     * @tc.desc: Subscribe audioBalance function and set the auxiliary function of audioBalance (0).
     */
    it('RegisterAudioBalance_0010', 1, function (done) {
      let caseCode = 'RegisterAudioBalance_0010'
      let res: number = undefined
      let param: number = -1
      config.audioBalance.set(param)
      setTimeout(() => {
        config.audioBalance.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.on success: ' + JSON.stringify(data))
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
     * @tc.number: RegisterAudioBalance_0020
     * @tc.name: Subscribe audioBalance function and set the auxiliary function of audioBalance (-1).
     * @tc.desc: Subscribe audioBalance function and set the auxiliary function of audioBalance (-1).
     */
    it('RegisterAudioBalance_0020', 1, function (done) {
      let caseCode = 'RegisterAudioBalance_0020'
      let res: number = undefined
      let param: number = 0
      config.audioBalance.set(param)
      config.audioBalance.on((data) => {
        console.error(LOG_PREFIX + caseCode + ' config.audioBalance.on success: ' + JSON.stringify(data))
        res = data
      })
      publish(caseCode)
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.error(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + res + ' expect assertEqual')
        expect(tarData).assertEqual(res)
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: RegisterAudioBalance_0030
     * @tc.name: Subscribe audioBalance function and set the auxiliary function of audioBalance (1).
     * @tc.desc: Subscribe audioBalance function and set the auxiliary function of audioBalance (1).
     */
    it('RegisterAudioBalance_0030', 1, function (done) {
      let caseCode = 'RegisterAudioBalance_0030'
      let res: number = undefined
      let param: number = 0
      config.audioBalance.set(param)
      config.audioBalance.on((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.on success: ' + JSON.stringify(data))
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
     * @tc.number: RegisterAudioBalance_0040
     * @tc.name: Subscribe audioBalance function and set the auxiliary function of audioBalance (0.5).
     * @tc.desc: Subscribe audioBalance function and set the auxiliary function of audioBalance (0.5).
     */
    it('RegisterAudioBalance_0040', 1, function (done) {
      let caseCode = 'RegisterAudioBalance_0040'
      let res: number = undefined
      let param: number = 0
      config.audioBalance.set(param)
      config.audioBalance.on((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.on success: ' + JSON.stringify(data))
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
     * @tc.number: UnRegisterAudioBalance_0010
     * @tc.name: Unsubscribe audioBalance function and set the auxiliary function of audioBalance (0).
     * @tc.desc: Unsubscribe audioBalance function and set the auxiliary function of audioBalance (0).
     */
    it('UnRegisterAudioBalance_0010', 1, function (done) {
      let caseCode = 'UnRegisterAudioBalance_0010'
      let res: number = undefined
      config.audioBalance.on((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.on success: ' + JSON.stringify(data))
        res = data
      })
      setTimeout(() => {
        config.audioBalance.off()
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
     * @tc.number: UnRegisterAudioBalance_0020
     * @tc.name: Unsubscribe audioBalance function and set the auxiliary function of audioBalance (-1).
     * @tc.desc: Unsubscribe audioBalance function and set the auxiliary function of audioBalance (-1).
     */
    it('UnRegisterAudioBalance_0020', 1, function (done) {
      let caseCode = 'UnRegisterAudioBalance_0020'
      let res: number = undefined
      config.audioBalance.on((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.on success: ' + JSON.stringify(data))
        res = data
      })
      setTimeout(() => {
        config.audioBalance.off()
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
     * @tc.number: UnRegisterAudioBalance_0030
     * @tc.name: Unsubscribe audioBalance function and set the auxiliary function of audioBalance (1).
     * @tc.desc: Unsubscribe audioBalance function and set the auxiliary function of audioBalance (1).
     */
    it('UnRegisterAudioBalance_0030', 1, function (done) {
      let caseCode = 'UnRegisterAudioBalance_0030'
      let res: number = undefined
      config.audioBalance.on((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.on success: ' + JSON.stringify(data))
        res = data
      })
      setTimeout(() => {
        config.audioBalance.off()
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + res + ' expect assertEqual')
          expect(tarData).assertEqual(1)
          expect(res).assertUndefined()
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: UnRegisterAudioBalance_0040
     * @tc.name: Unsubscribe audioBalance function and set the auxiliary function of audioBalance (0.5).
     * @tc.desc: Unsubscribe audioBalance function and set the auxiliary function of audioBalance (0.5).
     */
    it('UnRegisterAudioBalance_0040', 1, function (done) {
      let caseCode = 'UnRegisterAudioBalance_0040'
      let res: number = undefined
      config.audioBalance.on((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.on success: ' + JSON.stringify(data))
        res = data
      })
      setTimeout(() => {
        config.audioBalance.off()
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + res + ' expect assertEqual')
          expect(tarData).assertEqual(0.5)
          expect(res).assertUndefined()
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: SetGetAudioBalance_0010
     * @tc.name: After setting the audioBalance (0), get audioBalance value. (callback)
     * @tc.desc: After setting the audioBalance (0), get audioBalance value. (callback)
     */
    it('SetGetAudioBalance_0010', 1, function (done) {
      let caseCode = 'SetGetAudioBalance_0010'
      let param: number = 0
      config.audioBalance.set(param, (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set callback success')
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
     * @tc.number: SetGetAudioBalance_0020
     * @tc.name: After setting the audioBalance (-1), get audioBalance value. (callback)
     * @tc.desc: After setting the audioBalance (-1), get audioBalance value. (callback)
     */
    it('SetGetAudioBalance_0020', 1, function (done) {
      let caseCode = 'SetGetAudioBalance_0020'
      let param: number = -1
      config.audioBalance.set(param, (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set callback success')
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
     * @tc.number: SetGetAudioBalance_0030
     * @tc.name: After setting the audioBalance (1), get audioBalance value. (callback)
     * @tc.desc: After setting the audioBalance (1), get audioBalance value. (callback)
     */
    it('SetGetAudioBalance_0030', 1, function (done) {
      let caseCode = 'SetGetAudioBalance_0030'
      let param: number = 1
      config.audioBalance.set(param, (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set callback success')
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
     * @tc.number: SetGetAudioBalance_0040
     * @tc.name: After setting the audioBalance (0.5), get audioBalance value. (callback)
     * @tc.desc: After setting the audioBalance (0.5), get audioBalance value. (callback)
     */
    it('SetGetAudioBalance_0040', 1, function (done) {
      let caseCode = 'SetGetAudioBalance_0040'
      let param: number = 0.5
      config.audioBalance.set(param, (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set callback success')
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
     * @tc.number: SetGetAudioBalance_0050
     * @tc.name: After setting the audioBalance (0), get audioBalance value. (promise)
     * @tc.desc: After setting the audioBalance (0), get audioBalance value. (promise)
     */
    it('SetGetAudioBalance_0050', 1, function (done) {
      let caseCode = 'SetGetAudioBalance_0050'
      let param: number = 0
      config.audioBalance.set(param)
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set promise success')
          publish(caseCode)
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set promise failed: ' + JSON.stringify(error))
        })
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertEqual')
        expect(tarData).assertEqual(param)
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetGetAudioBalance_0060
     * @tc.name: After setting the audioBalance (-1), get audioBalance value. (promise)
     * @tc.desc: After setting the audioBalance (-1), get audioBalance value. (promise)
     */
    it('SetGetAudioBalance_0060', 1, function (done) {
      let caseCode = 'SetGetAudioBalance_0060'
      let param: number = -1
      config.audioBalance.set(param)
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set promise success')
          publish(caseCode)
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set promise failed: ' + JSON.stringify(error))
        })
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertEqual')
        expect(tarData).assertEqual(param)
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetGetAudioBalance_0070
     * @tc.name: After setting the audioBalance (1), get audioBalance value. (promise)
     * @tc.desc: After setting the audioBalance (1), get audioBalance value. (promise)
     */
    it('SetGetAudioBalance_0070', 1, function (done) {
      let caseCode = 'SetGetAudioBalance_0070'
      let param: number = 1
      config.audioBalance.set(param)
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set promise success')
          publish(caseCode)
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set promise failed: ' + JSON.stringify(error))
        })
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertEqual')
        expect(tarData).assertEqual(param)
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetGetAudioBalance_0080
     * @tc.name: After setting the audioBalance (0.5), get audioBalance value. (promise)
     * @tc.desc: After setting the audioBalance (0.5), get audioBalance value. (promise)
     */
    it('SetGetAudioBalance_0080', 1, function (done) {
      let caseCode = 'SetGetAudioBalance_0080'
      let param: number = 0.5
      config.audioBalance.set(param)
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set promise success')
          publish(caseCode)
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set promise failed: ' + JSON.stringify(error))
        })
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertEqual')
        expect(tarData).assertEqual(param)
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetGetAudioBalance_0090
     * @tc.name: Order setting the audioBalance (0, -1, 1, 0.5), get audioBalance value.
     * @tc.desc: Order setting the audioBalance (0, -1, 1, 0.5), get audioBalance value.
     */
    it('SetGetAudioBalance_0090', 3, function (done) {
      let caseCode = 'SetGetAudioBalance_0090'
      config.audioBalance.set(0)
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set 1 promise success')
          config.audioBalance.set(-1)
            .then(() => {
              console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set 2 promise success')
              config.audioBalance.set(1)
                .then(() => {
                  console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set 3 promise success')
                  config.audioBalance.set(0.5)
                    .then(() => {
                      console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set 4 promise success')
                      publish(caseCode)
                    })
                    .catch((error) => {
                      console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set 4 promise failed: ' + JSON.stringify(error))
                    })
                })
                .catch((error) => {
                  console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set 3 promise failed: ' + JSON.stringify(error))
                })
            })
            .catch((error) => {
              console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set 2 promise failed: ' + JSON.stringify(error))
            })
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set 1 promise failed: ' + JSON.stringify(error))
        })
      setTimeout(() => {
        let tarData = tarResult.get(caseCode)
        console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' expect assertEqual')
        expect(tarData).assertEqual(0.5)
        done()
      }, TIME_OUT)
    })
    /**
     * @tc.number: SetGetAudioBalance_0100
     * @tc.name: After setting the audioBalance (0), Subscribe audioBalance function and set the audioBalance (-1) for three consecutive times, and subscribers can only receive a callback (callback).
     * @tc.desc: After setting the audioBalance (0), Subscribe audioBalance function and set the audioBalance (-1) for three consecutive times, and subscribers can only receive a callback (callback).
     */
    it('SetGetAudioBalance_0100', 3, function (done) {
      let caseCode = 'SetGetAudioBalance_0100'
      let res: number[] = []
      let param: number = 0
      config.audioBalance.set(param, (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set callback success')
      })
      setTimeout(() => {
        config.audioBalance.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.on success: ' + JSON.stringify(data))
          res.push(data)
        })
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + JSON.stringify(res) + ' expect assertEqual')
          expect(tarData).assertEqual(-1)
          expect(res.length).assertEqual(1)
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: SetGetAudioBalance_0110
     * @tc.name: After setting the audioBalance (0), Subscribe audioBalance function and set the audioBalance (-1) for three consecutive times, and subscribers can only receive a callback (promise).
     * @tc.desc: After setting the audioBalance (0), Subscribe audioBalance function and set the audioBalance (-1) for three consecutive times, and subscribers can only receive a callback (promise).
     */
    it('SetGetAudioBalance_0110', 3, function (done) {
      let caseCode = 'SetGetAudioBalance_0110'
      let res: number[] = []
      let param: number = 0
      config.audioBalance.set(param)
      setTimeout(() => {
        config.audioBalance.on((data) => {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.on success: ' + JSON.stringify(data))
          res.push(data)
        })
        publish(caseCode)
        setTimeout(() => {
          let tarData = tarResult.get(caseCode)
          console.info(LOG_PREFIX + caseCode + ' tarData: ' + tarData + ' res: ' + JSON.stringify(res) + ' expect assertEqual')
          expect(tarData).assertEqual(-1)
          expect(res.length).assertEqual(1)
          done()
        }, TIME_OUT)
      }, TIME_OUT_S)
    })
    /**
     * @tc.number: SetErrorAudioBalance_0010
     * @tc.name: When setting the audioBalance (undefined), the setting fails. (callback)
     * @tc.desc: When setting the audioBalance (undefined), the setting fails. (callback)
     */
    it('SetErrorAudioBalance_0010', 2, function (done) {
      let caseCode = 'SetErrorAudioBalance_0010'
      let res: boolean = true
      let param: number = undefined
      config.audioBalance.set(param, (err) => {
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set callback res: ' + JSON.stringify(err))
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set callback failed: ' + JSON.stringify(err))
          res = false
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set callback success')
      })
      setTimeout(() => {
        expect(res).assertFalse()
        done()
      }, TIME_OUT)
    })

    /**
     * @tc.number: SetErrorAudioBalance_0030
     * @tc.name: When setting the audioBalance (undefined), the setting fails. (promise)
     * @tc.desc: When setting the audioBalance (undefined), the setting fails. (promise)
     */
    it('SetErrorAudioBalance_0030', 2, function (done) {
      let caseCode = 'SetErrorAudioBalance_0030'
      let res: boolean = true
      let param: number = undefined
      config.audioBalance.set(param)
        .then(() => {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set promise success')
        })
        .catch((error) => {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set promise failed: ' + JSON.stringify(error))
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
