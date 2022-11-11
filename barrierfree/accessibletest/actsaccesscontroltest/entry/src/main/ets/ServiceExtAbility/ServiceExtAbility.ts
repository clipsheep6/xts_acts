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

import AccessibilityExtensionAbility from '@ohos.application.AccessibilityExtensionAbility'
import { GesturePath } from '@ohos.accessibility.GesturePath';
import { GesturePoint } from '@ohos.accessibility.GesturePoint';
import commonEvent from '@ohos.commonEvent'

const LOG_PREFIX = '[CQH-ACCESS-CONTROL-ACCESSIBLE]'
const TAR_EVENT_NAME = 'on_target_change'
const EVENT_NAME = 'on_assist_change'
const EVENT_NAME_BACK = 'on_assist_change_extra'
let CommonEventSubscribeInfo = {
    events: [EVENT_NAME]
}

var subscriber
class ServiceExtAbility extends AccessibilityExtensionAbility {
    onConnect() {
        console.info(LOG_PREFIX + " onConnect")
        let context = this.context
        let eventData = { data: 'AccessControlAccessibility', parameters: { res: true } }
        commonEvent.createSubscriber(CommonEventSubscribeInfo).then(function (data) {
            console.info(LOG_PREFIX + " createSubscriber ")
            subscriber = data
            commonEvent.subscribe(subscriber,  (err, commonEventData) => {
                console.info(LOG_PREFIX + 'subscribeTest callback : ' + JSON.stringify(commonEventData))
                selectCode(context, commonEventData.data)
            })
            setTimeout(()=>{
                publishEvent(LOG_PREFIX, TAR_EVENT_NAME, eventData)
            }, 500)
        })
    }

    onDisconnect() {
        console.info(LOG_PREFIX + " onDisconnect")
        let eventData = { data: 'AccessControlAccessibility', parameters: { res: false } }
        publishEvent(LOG_PREFIX, TAR_EVENT_NAME, eventData)
        commonEvent.unsubscribe(subscriber)
    }

    onAccessibilityEvent(accessibilityEvent) {
        console.info(LOG_PREFIX + " accessibilityEvent : " + JSON.stringify(accessibilityEvent))
        selectEvent(accessibilityEvent.eventType)
    }

    onKeyEvent(keyEvent) {
        console.info(LOG_PREFIX + " keyEvent : " + JSON.stringify(keyEvent))
        return true
    }
}

function selectCode(context, caseCode) {
    switch (caseCode) {
        case 'AccessControl_0041':
            AccessControl_0041(context, caseCode)
            break
        case 'AccessControl_0042':
            AccessControl_0042(context, caseCode)
            break
        case 'AccessControl_0051':
            AccessControl_0051(context, caseCode)
            break
        case 'AccessControl_0052':
            AccessControl_0052(context, caseCode)
            break
        case 'AccessControl_0081':
            AccessControl_0081(context, caseCode)
            break
        case 'AccessControl_0082':
            AccessControl_0082(context, caseCode)
            break
        default:
            return
    }
}

function AccessControl_0041(context, caseCode) {
    const logTag = LOG_PREFIX + caseCode
    getWindowRootElement(context, caseCode, logTag, false)
}

function AccessControl_0042(context, caseCode) {
    const logTag = LOG_PREFIX + caseCode
    getWindowRootElement(context, caseCode, logTag, false)
}

function getWindowRootElement(context, caseCode, logTag, focus, action?) {
    context.getWindowRootElement()
        .then((res) => {
            res.findElement('content', 'Test1')
                .then((elementArray) => {
                    if (focus) {
                        elementArray[0].performAction(action)
                            .then(() => {
                                console.info(logTag + ' action: ' + action + ' res:success')
                            })
                            .catch((error) => {
                                console.info(logTag + ' action: ' + action + ' fail:' + JSON.stringify(error))
                                return
                            })
                    } else {
                        var commonEventPublishData = { data: caseCode, parameters: { res: elementArray.length > 0 } }
                        publishEvent(logTag, EVENT_NAME_BACK, commonEventPublishData)
                    }
                })
                .catch((error) => {
                    console.info(logTag + ' findElement failed. Cause: ' + JSON.stringify(error))
                    return
                })
        })
        .catch((err) => {
            console.info(logTag + "getWindowRootElement Promise err=" + JSON.stringify(err))
            var commonEventPublishData = { data: caseCode, parameters: { res: true } }
            publishEvent(logTag, EVENT_NAME_BACK, commonEventPublishData)
            return
        })
}

function getGesturePath(durationTime: number, array: Array<string>) {
    let gesturePath = new GesturePath(durationTime)
    for (let item of array) {
        let pos = item.split(',')
        let point = new GesturePoint(Number(pos[0]), Number(pos[1]))
        gesturePath.points.push(point)
    }
    return gesturePath
}

let click1: Array<string> = ["207,129"]
let click3: Array<string> = ["207,129", "207,129"]

function AccessControl_0051(context, caseCode) {
    const logTag = LOG_PREFIX + caseCode
    let gesturePath = getGesturePath(100, click1)
    gestureInjectPromise(logTag, context, gesturePath)
}

function AccessControl_0052(context, caseCode) {
    const logTag = LOG_PREFIX + caseCode
    let gesturePath = getGesturePath(100, click1)
    gestureInjectPromise(logTag, context, gesturePath)
}

let click2: Array<string> = ["260,580"]
//click
function AccessControl_0081(context, caseCode) {
    const logTag = LOG_PREFIX + caseCode
    let gesturePath = getGesturePath(100, click2)
    gestureInjectCallback(logTag, context, gesturePath, caseCode)
}

function AccessControl_0082(context, caseCode) {
    const logTag = LOG_PREFIX + caseCode
    let gesturePath = getGesturePath(100, click2)
    gestureInjectCallback(logTag, context, gesturePath, caseCode)
}

function selectEvent(eventType) {
    switch (eventType) {
        case 'hoverEnter':
            publishEvent(LOG_PREFIX + " AccessControl_0051 ", EVENT_NAME_BACK, { data: 'AccessControl_0051', parameters: { res: true } })
            break
        case 'click':
            publishEvent(LOG_PREFIX + " AccessControl_0052 ", EVENT_NAME_BACK, { data: 'AccessControl_0052', parameters: { res: true } })
            break
        default:
            break
    }
}

function gestureInjectCallback(logTag, context, gesturePath, caseCode) {
    try {
        context.injectGesture(gesturePath, (data) => {
            console.info(logTag + "injectGesture Callback res: " + JSON.stringify(data))
            var commonEventPublishData = { data: caseCode, parameters: { res: data.code === 0 } }
            publishEvent(logTag, EVENT_NAME_BACK, commonEventPublishData)
        })
    } catch (e) {
        console.info(logTag + " injectGesture Callback Exception: " + JSON.stringify(e.message))
        return
    }
}

function gestureInjectPromise(logTag, context, gesturePath) {
    try {
        context.injectGesture(gesturePath)
            .then(() => {
                console.info(logTag + "injectGesture Promise success")
            })
            .catch((err) => {
                console.info(logTag + "injectGesture Promise err=" + JSON.stringify(err))
            })
    } catch (e) {
        console.info(LOG_PREFIX + " injectGesture Promise Exception: " + JSON.stringify(e.message))
        return
    }
}

function publishEvent(logTag, eventName, commonEventPublishData) {
    console.info(logTag + ' publishEvent data : ' + JSON.stringify(commonEventPublishData))
    try {
        commonEvent.publish(eventName, commonEventPublishData, (err, data) => {
            if (err && err.code != 0) {
                console.info(logTag + ' failed to publish because ' + JSON.stringify(err))
                return
            }
            console.info(logTag + ' success data : ' + JSON.stringify(data))
        })
    } catch (e) {
        console.info(logTag + '[publishEvent]  error' + e.message)
        return
    }
}

export default ServiceExtAbility