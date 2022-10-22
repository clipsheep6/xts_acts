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
import accessibility from '@ohos.accessibility'
import prompt from '@system.prompt'

const ASSIST_BUNDLE_NAME = 'com.example.accesscontroltest/ServiceExtAbility'
const LOG_PREFIX = '[CQH-CONTROL-TARGET]'
const EVENT_NAME = 'on_target_change'
const EVENT_NAME_BACK = 'on_target_change_extra'
const ASSIST_EVENT_NAME = 'on_assist_change'
const CommonEventSubscribeInfo = {
  events: [EVENT_NAME]
}
const TIME_OUT = 1000

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

function publishEvent(eventName, commonEventPublishData) {
  console.info(LOG_PREFIX + ' publishEvent data : ' + JSON.stringify(commonEventPublishData))
  try {
    commonEvent.publish(eventName, commonEventPublishData, (err, data) => {
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
  @State title: string = 'AccessControlTest'
  @State message: string = ''
  @State fontColor: Color = Color.Red
  @State capability: Array<accessibility.Capability> = new Array()
  @State caseCode: string = ''
  @State accessibilityIsOn: boolean = false
  private subScriber = undefined

  aboutToAppear() {
    console.info('TargetApp aboutToAppear')
    this.createSubscriber()
    console.info('start run testcase!!!')
  }

  aboutToDisappear() {
    console.info('TargetApp aboutToDisappear')
    commonEvent.unsubscribe(this.subScriber)
    this.subScriber = undefined
  }

  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Start, justifyContent: FlexAlign.Start }) {
      Button('Test1')
        .fontSize(24)
        .margin({ top: 10 })
        .width('60%')
        .height(50)
        .onClick((e) => {
          let position = 'screenX:' + vp2px(e.screenX) + ' screenY:' + vp2px(e.screenY) + ' x:' + vp2px(e.x) + ' y:' + vp2px(e.y)
          console.info(LOG_PREFIX + ' button position : ' + position)
          prompt.showToast({ message: position })
        })
      Button('AccessControl_0061', { stateEffect: true })
        .fontSize(20)
        .margin({ top: 10 })
        .width('60%')
        .height(50)
        .onClick((e) => {
          let position = 'screenX:' + vp2px(e.screenX) + ' screenY:' + vp2px(e.screenY) + ' x:' + vp2px(e.x) + ' y:' + vp2px(e.y)
          console.info(LOG_PREFIX + ' button position : ' + position)
          prompt.showToast({ message: position })
          let logTag = LOG_PREFIX + ' AccessControl_0061 '
          this.getAbility(logTag, ['keyEventObserver'])
        })
      Button('AccessControl_0062', { stateEffect: true })
        .fontSize(20)
        .margin({ top: 10 })
        .width('60%')
        .height(50)
        .onClick((e) => {
          let position = 'screenX:' + vp2px(e.screenX) + ' screenY:' + vp2px(e.screenY) + ' x:' + vp2px(e.x) + ' y:' + vp2px(e.y)
          console.info(LOG_PREFIX + ' button position : ' + position)
          prompt.showToast({ message: position })
          let logTag = LOG_PREFIX + ' AccessControl_0062 '
          this.getAbility(logTag, ['retrieve'])
        })
      Button('AccessControl_0071', { stateEffect: true })
        .fontSize(20)
        .margin({ top: 10 })
        .width('60%')
        .height(50)
        .onClick((e) => {
          let position = 'screenX:' + vp2px(e.screenX) + ' screenY:' + vp2px(e.screenY) + ' x:' + vp2px(e.x) + ' y:' + vp2px(e.y)
          console.info(LOG_PREFIX + ' button position : ' + position)
          prompt.showToast({ message: position })
          let logTag = LOG_PREFIX + ' AccessControl_0071 '
          this.getAbility(logTag, ['zoom'])
        })
      Button('AccessControl_0072', { stateEffect: true })
        .fontSize(20)
        .margin({ top: 10 })
        .width('60%')
        .height(50)
        .onClick((e) => {
          let position = 'screenX:' + vp2px(e.screenX) + ' screenY:' + vp2px(e.screenY) + ' x:' + vp2px(e.x) + ' y:' + vp2px(e.y)
          console.info(LOG_PREFIX + ' button position : ' + position)
          prompt.showToast({ message: position })
          let logTag = LOG_PREFIX + ' AccessControl_0072 '
          this.getAbility(logTag, ['retrieve'])
        })
      Button('AccessControl_0081-0082', { stateEffect: true })
        .fontSize(20)
        .margin({ top: 10 })
        .width('60%')
        .height(50)
        .onClick((e) => {
          let position = 'screenX:' + vp2px(e.screenX) + ' screenY:' + vp2px(e.screenY) + ' x:' + vp2px(e.x) + ' y:' + vp2px(e.y)
          console.info(LOG_PREFIX + ' button position : ' + position)
          prompt.showToast({ message: position })
          let commonEventPublishData = { data: this.caseCode, parameters: { res: true } }
          publishEvent(EVENT_NAME_BACK, commonEventPublishData)
        })
      Button('关闭辅助应用')
        .fontSize(20)
        .margin({ top: 10 })
        .width('60%')
        .height(50)
        .onClick(() => disableAbility(LOG_PREFIX, ASSIST_BUNDLE_NAME))
      Text(this.title)
        .fontSize(20)
        .margin({ top: 10 })
      Text(this.message)
        .fontSize(30)
        .fontColor(this.fontColor)
        .margin({ top: 10 })
    }.height('100%').width('100%')
  }

  getAbility(logTag, capability) {
    config.enableAbility(ASSIST_BUNDLE_NAME, capability)
      .then(() => {
        console.info(logTag + 'enableAbility success.')
      })
      .catch((error) => {
        console.info(logTag + 'enableAbility failed. Cause: ' + JSON.stringify(error))
        return
      })
    setTimeout(() => {
      accessibility.getAbilityLists('all', 'enable')
        .then((res) => {
          if (res.length > 0) {
            this.message = '辅助应用已经启动,能力：' + JSON.stringify(res[0].capabilities)
            this.fontColor = Color.Green
          }
        })
        .catch((error) => {
          console.info(logTag + ' getAbilityLists error ' + JSON.stringify(error))
          return
        })
    }, TIME_OUT)
  }

  createSubscriber() {
    commonEvent.createSubscriber(CommonEventSubscribeInfo).then((subscriber) => {
      console.info(LOG_PREFIX + 'createSubscriber success')
      this.subScriber = subscriber
      commonEvent.subscribe(subscriber, (error, commonEventData) => {
        console.info(LOG_PREFIX + 'subscribeTest error : ' + JSON.stringify(error) + 'data' + JSON.stringify(commonEventData))
        if (error.code != 0) {
          console.info(LOG_PREFIX + 'subscribe failed. Cause:' + JSON.stringify(error))
          return
        }
        console.info(LOG_PREFIX + 'subscribeTest callback : ' + JSON.stringify(commonEventData))
        this.selectCode(commonEventData.data, commonEventData.parameters.res)
      })
    }).catch((error) => {
      console.info(LOG_PREFIX + 'createSubscriber failed. Cause: ' + JSON.stringify(error))
      return
    })
  }

  selectCode(caseCode: string, res: boolean) {
    switch (caseCode) {
      case 'AccessControl_0010':
        this.caseCode = caseCode
        this.AccessControl_0010(caseCode)
        break
      case 'AccessControl_0040':
        this.caseCode = caseCode
        this.AccessControl_0040(caseCode)
        break
      case 'AccessControl_0041':
        this.caseCode = caseCode
        this.AccessControl_0041(caseCode)
        break
      case 'AccessControl_0042':
        this.caseCode = caseCode
        this.AccessControl_0042(caseCode)
        break
      case 'AccessControl_0050':
        this.caseCode = caseCode
        this.AccessControl_0050(caseCode)
        break
      case 'AccessControl_0051':
        this.caseCode = caseCode
        this.AccessControl_0051(caseCode)
        break
      case 'AccessControl_0052':
        this.caseCode = caseCode
        this.AccessControl_0052(caseCode)
        break
      case 'AccessControl_0060':
        this.caseCode = caseCode
        this.AccessControl_0060(caseCode)
        break
      case 'AccessControl_0070':
        this.caseCode = caseCode
        this.AccessControl_0070(caseCode)
        break
      case 'AccessControl_0080':
        this.caseCode = caseCode
        this.AccessControl_0080(caseCode)
        break
      case 'AccessControl_0081':
        this.caseCode = caseCode
        this.AccessControl_0081(caseCode)
        break
      case 'AccessControl_0082':
        this.caseCode = caseCode
        this.AccessControl_0082(caseCode)
        break
      case 'AccessControl_0090':
        this.caseCode = caseCode
        this.AccessControl_0090(caseCode)
        break
      case 'AccessControl_0100':
        this.caseCode = caseCode
        this.AccessControl_0100(caseCode)
        break
      case 'AccessControl_0110':
        this.caseCode = caseCode
        this.AccessControl_0110(caseCode)
        break
      case 'AccessControlAccessibility':
        this.accessibilityIsOn = res
        if(this.accessibilityIsOn){
          console.info(LOG_PREFIX + ' Accessibility start success:' + this.caseCode)
          let commonEventPublishData = { data: this.caseCode }
          publishEvent(ASSIST_EVENT_NAME, commonEventPublishData)
        }
        break
    }
  }

  AccessControl_0010(caseCode) {
    let logTag = LOG_PREFIX + ' AccessControl_0010 '
    accessibility.getAbilityLists('all', 'install')
      .then((res) => {
        if (res.length > 0) {
          this.message = '请授权辅助应用能力：' + JSON.stringify(res[0].capabilities)
          this.fontColor = Color.Green
          let commonEventPublishData = { data: caseCode, parameters: { res: true } }
          publishEvent(EVENT_NAME_BACK, commonEventPublishData)
        }
      })
      .catch((error) => {
        console.info(logTag + ' getAbilityLists error ' + JSON.stringify(error))
        return
      })
  }

  AuthorizeAbility(logTag, capability) {
    accessibility.getAbilityLists('all', 'install')
      .then((res) => {
        if (res.length > 0) {
          this.message = '请授权辅助应用能力：' + JSON.stringify(res[0].capabilities)
          this.fontColor = Color.Green
          config.enableAbility(ASSIST_BUNDLE_NAME, capability)
            .then(() => {
              console.info(logTag + 'enableAbility success.')
            })
            .catch((error) => {
              console.info(logTag + 'enableAbility failed. Cause: ' + JSON.stringify(error))
              return
            })
        }
      })
      .catch((error) => {
        console.info(logTag + ' getAbilityLists error ' + JSON.stringify(error))
        return
      })
  }

  AccessControl_0040(caseCode) {
    let logTag = LOG_PREFIX + ' AccessControl_0040 '
    this.AuthorizeAbility(logTag, ['retrieve'])
    setTimeout(() => {
      accessibility.getAbilityLists('all', 'enable')
        .then((res) => {
          if (res.length > 0 && res[0].capabilities.indexOf('retrieve') != -1) {
            this.message = '辅助应用已经启动,能力：' + JSON.stringify(res[0].capabilities)
            this.fontColor = Color.Green
            let commonEventPublishData = { data: caseCode, parameters: { res: true } }
            publishEvent(EVENT_NAME_BACK, commonEventPublishData)
          }
        })
        .catch((error) => {
          console.info(logTag + ' getAbilityLists error ' + JSON.stringify(error))
          return
        })
    }, TIME_OUT)
  }

  AccessControl_0041(caseCode) {
    let logTag = LOG_PREFIX + ' AccessControl_0041 '
    console.info(logTag + ' send event ')
    let commonEventPublishData = { data: caseCode }
    publishEvent(ASSIST_EVENT_NAME, commonEventPublishData)
  }

  AccessControl_0042(caseCode) {
    let logTag = LOG_PREFIX + ' AccessControl_0042 '
    this.AuthorizeAbility(logTag, ['keyEventObserver'])
  }

  AccessControl_0050(caseCode) {
    let logTag = LOG_PREFIX + ' AccessControl_0050 '
    this.AuthorizeAbility(logTag, ['touchGuide'])
    setTimeout(() => {
      accessibility.getAbilityLists('all', 'enable')
        .then((res) => {
          if (res.length > 0 && res[0].capabilities.indexOf('touchGuide') != -1) {
            this.message = '辅助应用已经启动,能力：' + JSON.stringify(res[0].capabilities)
            this.fontColor = Color.Green
            let commonEventPublishData = { data: caseCode, parameters: { res: true } }
            publishEvent(EVENT_NAME_BACK, commonEventPublishData)
          }
        })
        .catch((error) => {
          console.info(logTag + ' getAbilityLists error ' + JSON.stringify(error))
          return
        })
    }, TIME_OUT)
  }

  AccessControl_0051(caseCode) {
    let logTag = LOG_PREFIX + ' AccessControl_0051 '
    this.AuthorizeAbility(logTag, ['retrieve', 'touchGuide', 'gesture'])
  }

  AccessControl_0052(caseCode) {
    let logTag = LOG_PREFIX + ' AccessControl_0052 '
    this.AuthorizeAbility(logTag, ['retrieve', 'gesture'])
  }

  AccessControl_0060(caseCode) {
    let logTag = LOG_PREFIX + ' AccessControl_0060 '
    this.AuthorizeAbility(logTag, ['keyEventObserver'])
    setTimeout(() => {
      accessibility.getAbilityLists('all', 'enable')
        .then((res) => {
          if (res.length > 0 && res[0].capabilities.indexOf('keyEventObserver') != -1) {
            this.message = '辅助应用已经启动,能力：' + JSON.stringify(res[0].capabilities)
            this.fontColor = Color.Green
            let commonEventPublishData = { data: caseCode, parameters: { res: true } }
            publishEvent(EVENT_NAME_BACK, commonEventPublishData)
          }
        })
        .catch((error) => {
          console.info(logTag + ' getAbilityLists error ' + JSON.stringify(error))
          return
        })
    }, TIME_OUT)
  }

  AccessControl_0070(caseCode) {
    let logTag = LOG_PREFIX + ' AccessControl_0070 '
    this.AuthorizeAbility(logTag, ['zoom'])
    setTimeout(() => {
      accessibility.getAbilityLists('all', 'enable')
        .then((res) => {
          if (res.length > 0 && res[0].capabilities.indexOf('zoom') != -1) {
            this.message = '辅助应用已经启动,能力：' + JSON.stringify(res[0].capabilities)
            this.fontColor = Color.Green
            let commonEventPublishData = { data: caseCode, parameters: { res: true } }
            publishEvent(EVENT_NAME_BACK, commonEventPublishData)
          }
        })
        .catch((error) => {
          console.info(logTag + ' getAbilityLists error ' + JSON.stringify(error))
          return
        })
    }, TIME_OUT)
  }

  AccessControl_0080(caseCode) {
    let logTag = LOG_PREFIX + ' AccessControl_0080 '
    this.AuthorizeAbility(logTag, ['gesture'])
    setTimeout(() => {
      accessibility.getAbilityLists('all', 'enable')
        .then((res) => {
          if (res.length > 0 && res[0].capabilities.indexOf('gesture') != -1) {
            this.message = '辅助应用已经启动,能力：' + JSON.stringify(res[0].capabilities)
            this.fontColor = Color.Green
            let commonEventPublishData = { data: caseCode, parameters: { res: true } }
            publishEvent(EVENT_NAME_BACK, commonEventPublishData)
          }
        })
        .catch((error) => {
          console.info(logTag + ' getAbilityLists error ' + JSON.stringify(error))
          return
        })
    }, TIME_OUT)
  }

  AccessControl_0081(caseCode) {
    let logTag = LOG_PREFIX + ' AccessControl_0081 '
    console.info(logTag + ' send event ')
    let commonEventPublishData = { data: caseCode }
    publishEvent(ASSIST_EVENT_NAME, commonEventPublishData)
  }

  AccessControl_0082(caseCode) {
    let logTag = LOG_PREFIX + ' AccessControl_0082 '
    this.AuthorizeAbility(logTag, ['retrieve'])
  }

  AccessControl_0090(caseCode) {
    let logTag = LOG_PREFIX + ' AccessControl_0090 '
    this.AuthorizeAbility(logTag, ['retrieve', 'touchGuide'])
    setTimeout(() => {
      accessibility.getAbilityLists('all', 'enable')
        .then((res) => {
          if (res.length > 0 && res[0].capabilities.indexOf('retrieve') != -1
          && res[0].capabilities.indexOf('touchGuide') != -1) {
            this.message = '辅助应用已经启动,能力：' + JSON.stringify(res[0].capabilities)
            this.fontColor = Color.Green
            let commonEventPublishData = { data: caseCode, parameters: { res: true } }
            publishEvent(EVENT_NAME_BACK, commonEventPublishData)
          }
        })
        .catch((error) => {
          console.info(logTag + ' getAbilityLists error ' + JSON.stringify(error))
          return
        })
    }, TIME_OUT)
  }

  AccessControl_0100(caseCode) {
    let logTag = LOG_PREFIX + ' AccessControl_0100 '
    this.AuthorizeAbility(logTag, ['retrieve', 'touchGuide', 'keyEventObserver', 'gesture'])
    setTimeout(() => {
      accessibility.getAbilityLists('all', 'enable')
        .then((res) => {
          if (res.length > 0 && res[0].capabilities.indexOf('retrieve') != -1
          && res[0].capabilities.indexOf('touchGuide') != -1
          && res[0].capabilities.indexOf('keyEventObserver') != -1
          && res[0].capabilities.indexOf('gesture') != -1) {
            this.message = '辅助应用已经启动,能力：' + JSON.stringify(res[0].capabilities)
            this.fontColor = Color.Green
            let commonEventPublishData = { data: caseCode, parameters: { res: true } }
            publishEvent(EVENT_NAME_BACK, commonEventPublishData)
          }
        })
        .catch((error) => {
          console.info(logTag + ' getAbilityLists error ' + JSON.stringify(error))
          return
        })
    }, TIME_OUT)
  }

  AccessControl_0110(caseCode) {
    let logTag = LOG_PREFIX + ' AccessControl_0110 '
    accessibility.getAbilityLists('all', 'enable')
      .then((res) => {
        if (res.length < 1) {
          this.message = '未授权'
          this.fontColor = Color.Red
          let commonEventPublishData = { data: caseCode, parameters: { res: false } }
          publishEvent(EVENT_NAME_BACK, commonEventPublishData)
        }
      })
      .catch((error) => {
        console.info(logTag + ' getAbilityLists error ' + JSON.stringify(error))
        return
      })
  }
}
