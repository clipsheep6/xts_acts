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
import file from '@system.file'
import commonEvent from '@ohos.commonEvent'
import config from '@ohos.accessibility.config'

const LOG_PREFIX = '[CQH-ACCESSIBILITY-CONFIG-TARGET]'
const EVENT_NAME_BACK = 'on_target_change_extra'
const CommonEventSubscribeInfo = {
  events: ['on_target_change']
}

function publishEvent(commonEventPublishData) {
  console.info(LOG_PREFIX + ' publishEvent data : ' + JSON.stringify(commonEventPublishData))
  try {
    commonEvent.publish(EVENT_NAME_BACK, commonEventPublishData, (err, data) => {
      if (err.code != 0) {
        console.info(LOG_PREFIX + ' failed to publish because ' + JSON.stringify(err))
        return
      }
      console.info(LOG_PREFIX + ' success data : ' + JSON.stringify(data))
    })
  } catch (e) {
    console.info(LOG_PREFIX + ' publishEvent  error' + e.message)
  }
}

@Entry
@Component
struct Index {
  @State message: string = 'accessibilityConfigPart'
  private caseCode: string = ''
  @State attributeAudioBalance: string = 'audioBalance'
  @State attributeMouseKey: string = 'mouseKey'
  private subScriber = undefined

  aboutToAppear() {
    console.info('TargetApp aboutToAppear')
    this.createSubscriber()
  }

  aboutToDisappear() {
    console.info('TargetApp aboutToDisappear')
    commonEvent.unsubscribe(this.subScriber)
    this.subScriber = undefined
  }

  build() {
    Column() {
      Row() {
        Grid() {
          GridItem() {
            Text(this.attributeAudioBalance)
              .fontSize(25)
          }.columnStart(1).columnEnd(2)

          GridItem() {
            Toggle({ type: ToggleType.Switch, isOn: true })
              .onChange((isOn: boolean) => {
                console.info('Component status:' + isOn)
              })
          }.columnStart(3).columnEnd(3)
        }
        .columnsTemplate('1fr 1fr 1fr')
        .rowsTemplate('1fr')
        .columnsGap(10)
        .width('100%')
      }.height(50).margin(5)

      Row() {
        Grid() {
          GridItem() {
            Text(this.attributeMouseKey)
              .fontSize(25)
          }.columnStart(1).columnEnd(2)

          GridItem() {
            Toggle({ type: ToggleType.Switch, isOn: true })
              .onChange((isOn: boolean) => {
                console.info('Component status:' + isOn)
              })
          }.columnStart(3).columnEnd(3)
        }
        .columnsTemplate('1fr 1fr 1fr')
        .rowsTemplate('1fr')
        .columnsGap(10)
        .width('100%')
      }.height(50).margin(5)
    }.height('100%')
  }

  createSubscriber() {
    commonEvent.createSubscriber(CommonEventSubscribeInfo).then((subscriber) => {
      this.subScriber = subscriber
      commonEvent.subscribe(subscriber, (error, commonEventData) => {
        if (error.code != 0) {
          console.info(LOG_PREFIX + 'subscribe failed. Cause:' + JSON.stringify(error))
          return
        }
        console.info(LOG_PREFIX + 'subscribeTest callback : ' + JSON.stringify(commonEventData))
        this.selectCode(commonEventData.data)
      })
    }).catch((error) => {
      console.info(LOG_PREFIX + 'createSubscriber failed. Cause: ' + JSON.stringify(error))
      return
    })
  }

  selectCode(caseCode: string) {
    let param = undefined
    switch (caseCode) {
      case 'RegisterAudioBalance_0010':
      case 'UnRegisterAudioBalance_0010':
        param = 0
        this.audioBalanceSet(caseCode, param)
        break
      case 'RegisterAudioBalance_0020':
      case 'UnRegisterAudioBalance_0020':
        param = -1
        this.audioBalanceSet(caseCode, param)
        break
      case 'RegisterAudioBalance_0030':
      case 'UnRegisterAudioBalance_0030':
        param = 1
        this.audioBalanceSet(caseCode, param)
        break
      case 'RegisterAudioBalance_0040':
      case 'UnRegisterAudioBalance_0040':
        param = 0.5
        this.audioBalanceSet(caseCode, param)
        break
      case 'SetGetAudioBalance_0010':
      case 'SetGetAudioBalance_0020':
      case 'SetGetAudioBalance_0030':
      case 'SetGetAudioBalance_0040':
        this.audioBalanceGetCallBack(caseCode)
        break
      case 'SetGetAudioBalance_0050':
      case 'SetGetAudioBalance_0060':
      case 'SetGetAudioBalance_0070':
      case 'SetGetAudioBalance_0080':
      case 'SetGetAudioBalance_0090':
        this.audioBalanceGetPromise(caseCode)
        break
      case 'SetGetAudioBalance_0100':
        this.audioBalanceSetGetCallBack(caseCode)
        break
      case 'SetGetAudioBalance_0110':
        this.audioBalanceSetGetPromise(caseCode)
        break
      case 'RegisterMouseKey_0010':
      case 'UnRegisterMouseKey_0010':
        param = true
        this.mouseKeySet(caseCode, param)
        break
      case 'RegisterMouseKey_0020':
      case 'UnRegisterMouseKey_0020':
        param = false
        this.mouseKeySet(caseCode, param)
        break
      case 'SetGetMouseKey_0010':
      case 'SetGetMouseKey_0020':
        this.mouseKeyGetCallBack(caseCode)
        break
      case 'SetGetMouseKey_0030':
      case 'SetGetMouseKey_0040':
      case 'SetGetMouseKey_0050':
        this.mouseKeyGetPromise(caseCode)
        break
      case 'SetGetMouseKey_0060':
        param = true
        this.mouseKeySetGetCallBack(caseCode, param)
        break
      case 'SetGetMouseKey_0070':
        param = false
        this.mouseKeySetGetCallBack(caseCode, param)
        break
      case 'SetGetMouseKey_0080':
        param = true
        this.mouseKeySetGetPromise(caseCode, param)
        break
      case 'SetGetMouseKey_0090':
        param = false
        this.mouseKeySetGetPromise(caseCode, param)
        break
      case 'RegisterMouseAutoClick_0010':
      case 'UnRegisterMouseAutoClick_0010':
        param = -1
        this.mouseAutoClickSet(caseCode, param)
        break
      case 'RegisterMouseAutoClick_0020':
      case 'UnRegisterMouseAutoClick_0020':
        param = 0
        this.mouseAutoClickSet(caseCode, param)
        break
      case 'RegisterMouseAutoClick_0030':
      case 'UnRegisterMouseAutoClick_0030':
        param = 5000
        this.mouseAutoClickSet(caseCode, param)
        break
      case 'RegisterMouseAutoClick_0040':
      case 'UnRegisterMouseAutoClick_0040':
        param = 10000
        this.mouseAutoClickSet(caseCode, param)
        break
      case 'SetGetMouseAutoClick_0010':
      case 'SetGetMouseAutoClick_0020':
      case 'SetGetMouseAutoClick_0030':
      case 'SetGetMouseAutoClick_0040':
        this.mouseAutoClickGetCallBack(caseCode)
        break
      case 'SetGetMouseAutoClick_0050':
      case 'SetGetMouseAutoClick_0060':
      case 'SetGetMouseAutoClick_0070':
      case 'SetGetMouseAutoClick_0080':
      case 'SetGetMouseAutoClick_0090':
        this.mouseAutoClickGetPromise(caseCode)
        break
      case 'SetGetMouseAutoClick_0100':
        this.mouseAutoClickSetGetCallBack(caseCode)
        break
      case 'SetGetMouseAutoClick_0110':
        this.mouseAutoClickSetGetPromise(caseCode)
        break
      case 'RegisterShortkey_0010':
      case 'UnRegisterShortkey_0010':
        param = true
        this.shortKeySet(caseCode, param)
        break
      case 'RegisterShortkey_0020':
      case 'UnRegisterShortkey_0020':
        param = false
        this.shortKeySet(caseCode, param)
        break
      case 'SetGetShortkey_0010':
      case 'SetGetShortkey_0020':
        this.shortKeyGetCallBack(caseCode)
        break
      case 'SetGetShortkey_0030':
      case 'SetGetShortkey_0040':
      case 'SetGetShortkey_0050':
        this.shortKeyGetPromise(caseCode)
        break
      case 'SetGetShortkey_0060':
        param = true
        this.shortKeySetGetCallBack(caseCode, param)
        break
      case 'SetGetShortkey_0070':
        param = false
        this.shortKeySetGetCallBack(caseCode, param)
        break
      case 'SetGetShortkey_0080':
        param = true
        this.shortKeySetGetPromise(caseCode, param)
        break
      case 'SetGetShortkey_0090':
        param = false
        this.shortKeySetGetPromise(caseCode, param)
        break
      case 'RegisterShortkeyTarget_0010':
      case 'UnRegisterShortkeyTarget_0010':
        param = 'com.example.test'
        this.shortKeyTargetSet(caseCode, param)
        break
      case 'SetGetShortkeyTarget_0010':
        this.shortKeyTargetGetCallBack(caseCode)
        break
      case 'SetGetShortkeyTarget_0020':
      case 'SetGetShortkeyTarget_0030':
        this.shortKeyTargetGetPromise(caseCode)
        break
      case 'SetGetShortkeyTarget_0040':
        this.shortKeyTargetSetGetCallBack(caseCode)
        break
      case 'SetGetShortkeyTarget_0050':
        this.shortKeyTargetSetGetPromise(caseCode)
        break
    }
  }

  audioBalanceSet(caseCode, param) {
    config.audioBalance.set(param)
      .then(() => {
        let commonEventPublishData = { data: caseCode, parameters: { res: param } }
        publishEvent(commonEventPublishData)
      })
      .catch((error) => {
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set promise error ' + JSON.stringify(error))
        return
      })
  }

  audioBalanceGetCallBack(caseCode) {
    config.audioBalance.get((err, data) => {
      if (err.code != 0) {
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.get callback failed: ' + JSON.stringify(err))
        return
      }
      console.info(LOG_PREFIX + caseCode + ' config.audioBalance.get callback success: ' + data)
      let commonEventPublishData = { data: caseCode, parameters: { res: data } }
      publishEvent(commonEventPublishData)
    })
  }

  audioBalanceGetPromise(caseCode) {
    config.audioBalance.get()
      .then((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.get promise success: ' + data)
        let commonEventPublishData = { data: caseCode, parameters: { res: data } }
        publishEvent(commonEventPublishData)
      })
      .catch((err) => {
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.get promise failed: ' + JSON.stringify(err))
      })
  }

  audioBalanceSetGetCallBack(caseCode) {
    let param: number = -1
    config.audioBalance.set(param, (err) => {
      if (err.code != 0) {
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set 1 callback failed: ' + JSON.stringify(err))
        return
      }
      console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set 1 callback success')
      config.audioBalance.set(param, (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set 2 callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set 2 callback success')
        config.audioBalance.set(param, (err) => {
          if (err.code != 0) {
            console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set 3 callback failed: ' + JSON.stringify(err))
            return
          }
          console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set 3 callback success')
          config.audioBalance.get((err, data) => {
            if (err.code != 0) {
              console.info(LOG_PREFIX + caseCode + ' config.audioBalance.get 4 callback failed: ' + JSON.stringify(err))
              return
            }
            console.info(LOG_PREFIX + caseCode + ' config.audioBalance.get 4 callback success: ' + data)
            let commonEventPublishData = { data: caseCode, parameters: { res: data } }
            publishEvent(commonEventPublishData)
          })
        })
      })
    })
  }

  audioBalanceSetGetPromise(caseCode) {
    let param: number = -1
    config.audioBalance.set(param)
      .then(() => {
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set 1 promise success')
        config.audioBalance.set(param)
          .then(() => {
            console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set 2 promise success')
            config.audioBalance.set(param)
              .then(() => {
                console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set 3 promise success')
                config.audioBalance.get()
                  .then((data) => {
                    console.info(LOG_PREFIX + caseCode + ' config.audioBalance.get 4 promise success: ' + data)
                    let commonEventPublishData = { data: caseCode, parameters: { res: data } }
                    publishEvent(commonEventPublishData)
                  })
                  .catch((err) => {
                    console.info(LOG_PREFIX + caseCode + ' config.audioBalance.get promise failed: ' + JSON.stringify(err))
                  })
              })
              .catch((error) => {
                console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set 3 promise error ' + JSON.stringify(error))
                return
              })
          })
          .catch((error) => {
            console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set 2 promise error ' + JSON.stringify(error))
            return
          })
      })
      .catch((error) => {
        console.info(LOG_PREFIX + caseCode + ' config.audioBalance.set 1 promise error ' + JSON.stringify(error))
        return
      })
  }

  mouseKeySet(caseCode, param) {
    config.mouseKey.set(param)
      .then(() => {
        let commonEventPublishData = { data: caseCode, parameters: { res: param } }
        publishEvent(commonEventPublishData)
      })
      .catch((error) => {
        console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set promise error ' + JSON.stringify(error))
        return
      })
  }

  mouseKeyGetCallBack(caseCode) {
    config.mouseKey.get((err, data) => {
      if (err.code != 0) {
        console.info(LOG_PREFIX + caseCode + ' config.mouseKey.get callback failed: ' + JSON.stringify(err))
        return
      }
      console.info(LOG_PREFIX + caseCode + ' config.mouseKey.get callback success: ' + data)
      let commonEventPublishData = { data: caseCode, parameters: { res: data } }
      publishEvent(commonEventPublishData)
    })
  }

  mouseKeyGetPromise(caseCode) {
    config.mouseKey.get()
      .then((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.mouseKey.get promise success: ' + data)
        let commonEventPublishData = { data: caseCode, parameters: { res: data } }
        publishEvent(commonEventPublishData)
      })
      .catch((err) => {
        console.info(LOG_PREFIX + caseCode + ' config.mouseKey.get promise failed: ' + JSON.stringify(err))
      })
  }

  mouseKeySetGetCallBack(caseCode, param) {
    config.mouseKey.set(param, (err) => {
      if (err.code != 0) {
        console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set 1 callback failed: ' + JSON.stringify(err))
        return
      }
      console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set 1 callback success')
      config.mouseKey.set(param, (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set 2 callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set 2 callback success')
        config.mouseKey.set(param, (err) => {
          if (err.code != 0) {
            console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set 3 callback failed: ' + JSON.stringify(err))
            return
          }
          console.info(LOG_PREFIX + caseCode + ' config.mouseKey.set 3 callback success')
          config.mouseKey.get((err, data) => {
            if (err.code != 0) {
              console.info(LOG_PREFIX + caseCode + ' config.mouseKey.get 4 callback failed: ' + JSON.stringify(err))
              return
            }
            console.info(LOG_PREFIX + caseCode + ' config.mouseKey.get 4 callback success: ' + data)
            let commonEventPublishData = { data: caseCode, parameters: { res: data } }
            publishEvent(commonEventPublishData)
          })
        })
      })
    })
  }

  mouseKeySetGetPromise(caseCode, param) {
    config.mouseKey.set(param)
      .then(() => {
        console.error(LOG_PREFIX + caseCode + ' config.mouseKey.set 1 promise success')
        config.mouseKey.set(param)
          .then(() => {
            console.error(LOG_PREFIX + caseCode + ' config.mouseKey.set 2 promise success')
            config.mouseKey.set(param)
              .then(() => {
                console.error(LOG_PREFIX + caseCode + ' config.mouseKey.set 3 promise success')
                config.mouseKey.get()
                  .then((data) => {
                    console.error(LOG_PREFIX + caseCode + ' config.mouseKey.get 4 promise success: ' + data)
                    let commonEventPublishData = { data: caseCode, parameters: { res: data } }
                    publishEvent(commonEventPublishData)
                  })
                  .catch((err) => {
                    console.error(LOG_PREFIX + caseCode + ' config.mouseKey.get 4 promise failed: ' + JSON.stringify(err))
                  })
              })
              .catch((error) => {
                console.error(LOG_PREFIX + caseCode + ' config.mouseKey.set 3 promise error ' + JSON.stringify(error))
                return
              })
          })
          .catch((error) => {
            console.error(LOG_PREFIX + caseCode + ' config.mouseKey.set 2 promise error ' + JSON.stringify(error))
            return
          })
      })
      .catch((error) => {
        console.error(LOG_PREFIX + caseCode + ' config.mouseKey.set 1 promise error ' + JSON.stringify(error))
        return
      })
  }


  mouseAutoClickSet(caseCode, param) {
    config.mouseAutoClick.set(param)
      .then(() => {
        let commonEventPublishData = { data: caseCode, parameters: { res: param } }
        publishEvent(commonEventPublishData)
      })
      .catch((error) => {
        console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set promise error ' + JSON.stringify(error))
        return
      })
  }

  mouseAutoClickGetCallBack(caseCode) {
    config.mouseAutoClick.get((err, data) => {
      if (err.code != 0) {
        console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.get callback failed: ' + JSON.stringify(err))
        return
      }
      console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.get callback success: ' + data)
      let commonEventPublishData = { data: caseCode, parameters: { res: data } }
      publishEvent(commonEventPublishData)
    })
  }

  mouseAutoClickGetPromise(caseCode) {
    config.mouseAutoClick.get()
      .then((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.get promise success: ' + data)
        let commonEventPublishData = { data: caseCode, parameters: { res: data } }
        publishEvent(commonEventPublishData)
      })
      .catch((err) => {
        console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.get promise failed: ' + JSON.stringify(err))
      })
  }

  mouseAutoClickSetGetCallBack(caseCode) {
    let param: number = 0
    config.mouseAutoClick.set(param, (err) => {
      if (err.code != 0) {
        console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set 1 callback failed: ' + JSON.stringify(err))
        return
      }
      console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set 1 callback success')
      config.mouseAutoClick.set(param, (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set 2 callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set 2 callback success')
        config.mouseAutoClick.set(param, (err) => {
          if (err.code != 0) {
            console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set 3 callback failed: ' + JSON.stringify(err))
            return
          }
          console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set 3 callback success')
          config.mouseAutoClick.get((err, data) => {
            if (err.code != 0) {
              console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.get 4 callback failed: ' + JSON.stringify(err))
              return
            }
            console.info(LOG_PREFIX + caseCode + ' config.mouseAutoClick.get 4 callback success: ' + data)
            let commonEventPublishData = { data: caseCode, parameters: { res: data } }
            publishEvent(commonEventPublishData)
          })
        })
      })
    })
  }

  mouseAutoClickSetGetPromise(caseCode) {
    let param: number = 0
    config.mouseAutoClick.set(param)
      .then(() => {
        console.error(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set 1 promise success')
        config.mouseAutoClick.set(param)
          .then(() => {
            console.error(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set 2 promise success')
            config.mouseAutoClick.set(param)
              .then(() => {
                console.error(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set 3 promise success')
                config.mouseAutoClick.get()
                  .then((data) => {
                    console.error(LOG_PREFIX + caseCode + ' config.mouseAutoClick.get 4 promise success: ' + data)
                    let commonEventPublishData = { data: caseCode, parameters: { res: data } }
                    publishEvent(commonEventPublishData)
                  })
                  .catch((err) => {
                    console.error(LOG_PREFIX + caseCode + ' config.mouseAutoClick.get promise failed: ' + JSON.stringify(err))
                  })
              })
              .catch((error) => {
                console.error(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set 3 promise error ' + JSON.stringify(error))
                return
              })
          })
          .catch((error) => {
            console.error(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set 2 promise error ' + JSON.stringify(error))
            return
          })
      })
      .catch((error) => {
        console.error(LOG_PREFIX + caseCode + ' config.mouseAutoClick.set 1 promise error ' + JSON.stringify(error))
        return
      })
  }

  shortKeySet(caseCode, param) {
    config.shortkey.set(param)
      .then(() => {
        let commonEventPublishData = { data: caseCode, parameters: { res: param } }
        publishEvent(commonEventPublishData)
      })
      .catch((error) => {
        console.info(LOG_PREFIX + caseCode + ' config.shortkey.set promise error ' + JSON.stringify(error))
        return
      })
  }

  shortKeyGetCallBack(caseCode) {
    config.shortkey.get((err, data) => {
      if (err.code != 0) {
        console.info(LOG_PREFIX + caseCode + ' config.shortkey.get callback failed: ' + JSON.stringify(err))
        return
      }
      console.info(LOG_PREFIX + caseCode + ' config.shortkey.get callback success: ' + data)
      let commonEventPublishData = { data: caseCode, parameters: { res: data } }
      publishEvent(commonEventPublishData)
    })
  }

  shortKeyGetPromise(caseCode) {
    config.shortkey.get()
      .then((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.shortkey.get promise success: ' + data)
        let commonEventPublishData = { data: caseCode, parameters: { res: data } }
        publishEvent(commonEventPublishData)
      })
      .catch((err) => {
        console.info(LOG_PREFIX + caseCode + ' config.shortkey.get promise failed: ' + JSON.stringify(err))
      })
  }

  shortKeySetGetCallBack(caseCode, param) {
    config.shortkey.set(param, (err) => {
      if (err.code != 0) {
        console.info(LOG_PREFIX + caseCode + ' config.shortkey.set 1 callback failed: ' + JSON.stringify(err))
        return
      }
      console.info(LOG_PREFIX + caseCode + ' config.shortkey.set 1 callback success')
      config.shortkey.set(param, (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.set 2 callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.shortkey.set 2 callback success')
        config.shortkey.set(param, (err) => {
          if (err.code != 0) {
            console.info(LOG_PREFIX + caseCode + ' config.shortkey.set 3 callback failed: ' + JSON.stringify(err))
            return
          }
          console.info(LOG_PREFIX + caseCode + ' config.shortkey.set 3 callback success')
          config.shortkey.get((err, data) => {
            if (err.code != 0) {
              console.info(LOG_PREFIX + caseCode + ' config.shortkey.get 4 callback failed: ' + JSON.stringify(err))
              return
            }
            console.info(LOG_PREFIX + caseCode + ' config.shortkey.get 4 callback success: ' + data)
            let commonEventPublishData = { data: caseCode, parameters: { res: data } }
            publishEvent(commonEventPublishData)
          })
        })
      })
    })
  }

  shortKeySetGetPromise(caseCode, param) {
    config.shortkey.set(param)
      .then(() => {
        console.error(LOG_PREFIX + caseCode + ' config.shortkey.set 1 promise success')
        config.shortkey.set(param)
          .then(() => {
            console.error(LOG_PREFIX + caseCode + ' config.shortkey.set 2 promise success')
            config.shortkey.set(param)
              .then(() => {
                console.error(LOG_PREFIX + caseCode + ' config.shortkey.set 3 promise success')
                config.shortkey.get()
                  .then((data) => {
                    console.error(LOG_PREFIX + caseCode + ' config.shortkey.get 4 promise success: ' + data)
                    let commonEventPublishData = { data: caseCode, parameters: { res: data } }
                    publishEvent(commonEventPublishData)
                  })
                  .catch((err) => {
                    console.error(LOG_PREFIX + caseCode + ' config.shortkey.get 4 promise failed: ' + JSON.stringify(err))
                  })
              })
              .catch((error) => {
                console.error(LOG_PREFIX + caseCode + ' config.shortkey.set 3 promise error ' + JSON.stringify(error))
                return
              })
          })
          .catch((error) => {
            console.error(LOG_PREFIX + caseCode + ' config.shortkey.set 2 promise error ' + JSON.stringify(error))
            return
          })
      })
      .catch((error) => {
        console.error(LOG_PREFIX + caseCode + ' config.shortkey.set 1 promise error ' + JSON.stringify(error))
        return
      })
  }

  shortKeyTargetSet(caseCode, param) {
    config.shortkeyTarget.set(param)
      .then(() => {
        let commonEventPublishData = { data: caseCode, parameters: { res: param } }
        publishEvent(commonEventPublishData)
      })
      .catch((error) => {
        console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set promise error ' + JSON.stringify(error))
        return
      })
  }

  shortKeyTargetGetCallBack(caseCode) {
    config.shortkeyTarget.get((err, data) => {
      if (err.code != 0) {
        console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.get callback failed: ' + JSON.stringify(err))
        return
      }
      console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.get callback success: ' + data)
      let commonEventPublishData = { data: caseCode, parameters: { res: data } }
      publishEvent(commonEventPublishData)
    })
  }

  shortKeyTargetGetPromise(caseCode) {
    config.shortkeyTarget.get()
      .then((data) => {
        console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.get promise success: ' + data)
        let commonEventPublishData = { data: caseCode, parameters: { res: data } }
        publishEvent(commonEventPublishData)
      })
      .catch((err) => {
        console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.get promise failed: ' + JSON.stringify(err))
      })
  }

  shortKeyTargetSetGetCallBack(caseCode) {
    let param = 'com.example.test'
    config.shortkeyTarget.set(param, (err) => {
      if (err.code != 0) {
        console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set 1 callback failed: ' + JSON.stringify(err))
        return
      }
      console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set 1 callback success')
      config.shortkeyTarget.set(param, (err) => {
        if (err.code != 0) {
          console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set 2 callback failed: ' + JSON.stringify(err))
          return
        }
        console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set 2 callback success')
        config.shortkeyTarget.set(param, (err) => {
          if (err.code != 0) {
            console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set 3 callback failed: ' + JSON.stringify(err))
            return
          }
          console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set 3 callback success')
          config.shortkeyTarget.get((err, data) => {
            if (err.code != 0) {
              console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.get 4 callback failed: ' + JSON.stringify(err))
              return
            }
            console.info(LOG_PREFIX + caseCode + ' config.shortkeyTarget.get 4 callback success: ' + data)
            let commonEventPublishData = { data: caseCode, parameters: { res: data } }
            publishEvent(commonEventPublishData)
          })
        })
      })
    })
  }

  shortKeyTargetSetGetPromise(caseCode) {
    let param = 'com.example.test'
    config.shortkeyTarget.set(param)
      .then(() => {
        console.error(LOG_PREFIX + caseCode + ' config.shortkeyTarget.get 1 promise success')
        config.shortkeyTarget.set(param)
          .then(() => {
            console.error(LOG_PREFIX + caseCode + ' config.shortkeyTarget.get 2 promise success')
            config.shortkeyTarget.set(param)
              .then(() => {
                console.error(LOG_PREFIX + caseCode + ' config.shortkeyTarget.get 3 promise success')
                config.shortkeyTarget.get()
                  .then((data) => {
                    console.error(LOG_PREFIX + caseCode + ' config.shortkeyTarget.get 4 promise success: ' + data)
                    let commonEventPublishData = { data: caseCode, parameters: { res: data } }
                    publishEvent(commonEventPublishData)
                  })
                  .catch((err) => {
                    console.error(LOG_PREFIX + caseCode + ' config.shortkeyTarget.get 4 promise failed: ' + JSON.stringify(err))
                  })
              })
              .catch((error) => {
                console.error(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set 3 promise error ' + JSON.stringify(error))
                return
              })
          })
          .catch((error) => {
            console.error(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set 2 promise error ' + JSON.stringify(error))
            return
          })
      })
      .catch((error) => {
        console.error(LOG_PREFIX + caseCode + ' config.shortkeyTarget.set 1 promise error ' + JSON.stringify(error))
        return
      })
  }
}