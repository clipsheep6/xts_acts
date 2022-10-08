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
import commonEvent from '@ohos.commonEvent'

const LOG_PREFIX = '[CQH-ACTION-ABILITY-ACCESSIBLE]'
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
        commonEvent.createSubscriber(CommonEventSubscribeInfo).then((data) => {
            console.info(LOG_PREFIX + 'createSubscriber success')
            subscriber = data
            commonEvent.subscribe(subscriber, (error, commonEventData) => {
                if (error.code != 0) {
                    console.info(LOG_PREFIX + 'subscribe failed. Cause:' + JSON.stringify(error))
                    return
                }
                console.info(LOG_PREFIX + 'subscribeTest callback : ' + JSON.stringify(commonEventData))
                selectCode(context, commonEventData.data)
            })
        }).catch((error) => {
            console.info(LOG_PREFIX + 'createSubscriber failed. Cause: ' + JSON.stringify(error))
            return
        })
    }

    onDisconnect() {
        console.info(LOG_PREFIX + " onDisconnect")
        commonEvent.unsubscribe(subscriber)
    }

    onAccessibilityEvent(accessibilityEvent) {
        console.info(LOG_PREFIX + " accessibilityEvent : " + JSON.stringify(accessibilityEvent))
    }

    onKeyEvent(keyEvent) {
        console.info(LOG_PREFIX + " keyEvent : " + JSON.stringify(keyEvent))
        return true
    }
}

function selectCode(context, caseName) {
    switch (caseName) {
        case 'ActionInitiation_0010':
            getWindowRootElement(context, caseName, 'Test1', 'focus')
            break
        case 'ActionInitiation_0011':
            getWindowRootElement(context, caseName, 'Test1', 'click')
            break
        case 'ActionInitiation_0012':
            getWindowRootElementCallBack1(context, caseName, 'Test1', 'focus')
            break
        case 'ActionInitiation_0013':
            getWindowRootElementCallBack2(context, caseName, 'Test1', 'focus')
            break
        case 'ActionInitiation_0014':
            getWindowRootElementCallBack1(context, caseName, 'Test1', 'click')
            break
        case 'ActionInitiation_0015':
            getWindowRootElementCallBack2(context, caseName, 'Test1', 'click')
            break
        case 'ActionInitiation_0021':
            getWindowRootElement(context, caseName, 'Test1', 'accessibilityFocus')
            break
        case 'ActionInitiation_0022':
            getWindowRootElementCallBack1(context, caseName, 'Test1', 'accessibilityFocus')
            break
        case 'ActionInitiation_0023':
            getWindowRootElementCallBack2(context, caseName, 'Test1', 'accessibilityFocus')
            break
        case 'ActionInitiation_0020':
            getWindowRootElement(context, caseName, 'Test1', 'clearAccessibilityFocus')
            break
        case 'ActionInitiation_0024':
            getWindowRootElementCallBack1(context, caseName, 'Test1', 'clearAccessibilityFocus')
            break
        case 'ActionInitiation_0025':
            getWindowRootElementCallBack2(context, caseName, 'Test1', 'clearAccessibilityFocus')
            break
        case 'ActionInitiation_0030':
            getWindowRootElement(context, caseName, 'Test1', 'clearFocus')
            break
        case 'ActionInitiation_0031':
            getWindowRootElementCallBack1(context, caseName, 'Test1', 'clearFocus')
            break
        case 'ActionInitiation_0032':
            getWindowRootElementCallBack2(context, caseName, 'Test1', 'clearFocus')
            break
        case 'ActionInitiation_0040':
            getWindowRootElement(context, caseName, 'Test1', 'longClick')
            break
        case 'ActionInitiation_0041':
            getWindowRootElementCallBack1(context, caseName, 'Test1', 'longClick')
            break
        case 'ActionInitiation_0042':
            getWindowRootElementCallBack2(context, caseName, 'Test1', 'longClick')
            break
        case 'ActionInitiation_0050':
            getWindowRootElement(context, caseName, 'Test2', 'delete', { selectTextBegin: 1, selectTextEnd: 3 })
            break
        case 'ActionInitiation_0051':
            getWindowRootElementCallBack1(context, caseName, 'Test2', 'delete')
            break
        case 'ActionInitiation_0052':
            getWindowRootElementCallBack2(context, caseName, 'Test2', 'delete', { selectTextBegin: 1, selectTextEnd: 3 })
            break
        case 'ActionInitiation_0060':
            getWindowRootElement(context, caseName, 'Test2', 'select', { selectTextBegin: 1, selectTextEnd: 3 })
            break
        case 'ActionInitiation_0061':
            getWindowRootElementCallBack1(context, caseName, 'Test2', 'select')
            break
        case 'ActionInitiation_0062':
            getWindowRootElementCallBack2(context, caseName, 'Test2', 'select', { selectTextBegin: 1, selectTextEnd: 3 })
            break
        case 'ActionInitiation_0070':
            getRootElement(context, caseName, 'scrollForward')
            break
        case 'ActionInitiation_0071':
            getRootElementCallBack1(context, caseName, 'scrollForward')
            break
        case 'ActionInitiation_0072':
            getRootElementCallBack2(context, caseName, 'scrollForward')
            break
        case 'ActionInitiation_0080':
            getWindowRootElement(context, caseName, 'Test2', 'clearSelection')
            break
        case 'ActionInitiation_0081':
            getWindowRootElementCallBack1(context, caseName, 'Test2', 'clearSelection')
            break
        case 'ActionInitiation_0082':
            getWindowRootElementCallBack2(context, caseName, 'Test2', 'clearSelection')
            break
        case 'ActionInitiation_0090':
            getRootElement(context, caseName, 'scrollBackward')
            break
        case 'ActionInitiation_0091':
            getRootElementCallBack1(context, caseName, 'scrollBackward')
            break
        case 'ActionInitiation_0092':
            getRootElementCallBack2(context, caseName, 'scrollBackward')
            break
        case 'ActionInitiation_0100':
            getWindowRootElement(context, caseName, 'Test2', 'copy')
            break
        case 'ActionInitiation_0101':
            getWindowRootElementCallBack1(context, caseName, 'Test2', 'copy')
            break
        case 'ActionInitiation_0102':
            getWindowRootElementCallBack2(context, caseName, 'Test2', 'copy')
            break
        case 'ActionInitiation_0120':
            getWindowRootElement(context, caseName, 'Test2', 'paste')
            break
        case 'ActionInitiation_0121':
            getWindowRootElementCallBack1(context, caseName, 'Test2', 'paste')
            break
        case 'ActionInitiation_0122':
            getWindowRootElementCallBack2(context, caseName, 'Test2', 'paste')
            break
        case 'ActionInitiation_0140':
            getWindowRootElement(context, caseName, 'Test2', 'cut')
            break
        case 'ActionInitiation_0141':
            getWindowRootElementCallBack1(context, caseName, 'Test2', 'cut')
            break
        case 'ActionInitiation_0142':
            getWindowRootElementCallBack2(context, caseName, 'Test2', 'cut')
            break
        case 'ActionInitiation_0160':
            getWindowRootElement(context, caseName, 'Test2', 'setSelection')
            break
        case 'ActionInitiation_0161':
            getWindowRootElementCallBack1(context, caseName, 'Test2', 'setSelection')
            break
        case 'ActionInitiation_0162':
            getWindowRootElementCallBack2(context, caseName, 'Test2', 'setSelection')
            break
        case 'ActionInitiation_0180':
            getWindowRootElement(context, caseName, 'Test2', 'setText', { text: '123456' })
            break
        case 'ActionInitiation_0181':
            getWindowRootElementCallBack1(context, caseName, 'Test2', 'setText')
            break
        case 'ActionInitiation_0182':
            getWindowRootElementCallBack2(context, caseName, 'Test2', 'setText', { text: '123456' })
            break
    }
}

function getRootElement(context, caseName, actionName, args?){
    let logTag = LOG_PREFIX + ' CASE ' + caseName
    context.getWindowRootElement((err, elements) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement error: " + JSON.stringify(err))
        }
        printElementsLength(logTag + " getWindowRootElement elements length: ", elements)
        elements.attributeValue("children").then((res) => {
            for (let index = 0; index < res.length; index++) {
		console.info(logTag + " attributeValue children: " + index);
		res[index].attributeValue("children").then((res) => {
		    for (let index2 = 0; index2 < res.length; index2++) {
		        res[index2].attributeValue("componentType").then((typeVal) => {
	                    console.info(logTag + " attributeValue componentType: " + typeVal)
		            if (typeVal == 'Scroll') {
		                res[index2].performAction(actionName, args).then((res) => {
	                            console.info(logTag + " performAction data: " + JSON.stringify(res))
			             var commonEventPublishData = { data: caseName, parameters: {res: res} }
			             publishEvent(commonEventPublishData)
			         }).catch((error) => {
			             console.info(logTag + ' performAction failed. Cause: ' + JSON.stringify(error))
			             return
			         })
		             }
		        }).catch((err) => {
			     console.info(logTag + " attributeValue componentType err=" + JSON.stringify(err));
		        });
		    }
		}).catch((error) => {
	           console.info(logTag + "attributeValue children" + index + " error:" + JSON.stringify(error))
		})
            }
        }).catch((error) => {
            console.info(logTag + "attributeValue 0 children error:" + JSON.stringify(error))
            return
        })
    })
}

function getRootElementCallBack1(context, caseName, actionName){
    let logTag = LOG_PREFIX + ' CASE ' + caseName
    context.getWindowRootElement((err, elements) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement error: " + JSON.stringify(err))
        }
        printElementsLength(logTag + " getWindowRootElement elements length: ", elements)
        elements.attributeValue("children").then((res) => {
        for (let index1 = 0; index1 < res.length; index1++) {
            console.info(logTag + " attributeValue 0 children: " + JSON.stringify(res))
            res[index1].attributeValue("children").then((res) => {
                for (let index = 0; index < res.length; index++) {
                    res[index].attributeValue("componentType").then((typeVal) => {
                        console.info(logTag + " attributeValue componentType: " + typeVal)
                        if (typeVal == 'Scroll') {
                            res[index].performAction(actionName, (err, res) => {
                                if (err?.code) {
                                    console.info(logTag + " performAction failed. Cause: " + JSON.stringify(err))
                                }
                                console.info(logTag + " performAction data: " + JSON.stringify(res))
                                var commonEventPublishData = { data: caseName, parameters: {res: res} }
                                publishEvent(commonEventPublishData)
                            })
                        }
                    }).catch((err) => {
                        console.info(logTag + " attributeValue componentType err=" + JSON.stringify(err));
                    });
                }
            }).catch((error) => {
                console.info(logTag + "attributeValue 1 children error:" + JSON.stringify(error))
                return
            })
        }
        }).catch((error) => {
            console.info(logTag + "attributeValue 0 children error:" + JSON.stringify(error))
            return
        })
    })
}

function getRootElementCallBack2(context, caseName, actionName, args?){
    let logTag = LOG_PREFIX + ' CASE ' + caseName
    context.getWindowRootElement((err, elements) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement error: " + JSON.stringify(err))
        }
        printElementsLength(logTag + " getWindowRootElement elements length: ", elements)
        elements.attributeValue("children").then((res) => {
        for (let index1 = 0; index1 < res.length; index1++) {
            console.info(logTag + " attributeValue 0 children: " + JSON.stringify(res))
            res[index1].attributeValue("children").then((res) => {
                for (let index = 0; index < res.length; index++) {
                    res[index].attributeValue("componentType").then((typeVal) => {
                        console.info(logTag + " attributeValue componentType: " + typeVal)
                        if (typeVal == 'Scroll') {
                            res[index].performAction(actionName, args, (err, res) => {
                                if (err?.code) {
                                    console.info(logTag + " performAction failed. Cause: " + JSON.stringify(err))
                                }
                                console.info(logTag + " performAction data: " + JSON.stringify(res))
                                var commonEventPublishData = { data: caseName, parameters: {res: res} }
                                publishEvent(commonEventPublishData)
                            })
                        }
                    }).catch((err) => {
                        console.info(logTag + " attributeValue componentType err=" + JSON.stringify(err));
                    });
                }
            }).catch((error) => {
                console.info(logTag + "attributeValue 1 children error:" + JSON.stringify(error))
                return
            })
        }
        }).catch((error) => {
            console.info(logTag + "attributeValue 0 children error:" + JSON.stringify(error))
            return
        })
    })
}

function getWindowRootElement(context, caseName, value, actionName, args?) {
    let logTag = LOG_PREFIX + ' CASE ' + caseName
    context.getWindowRootElement((err, elements) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement error: " + JSON.stringify(err))
        }
        printElementsLength(logTag + " getWindowRootElement elements length: ", elements)
        elements.findElement('content', value)
            .then((elementArray) => {
                printElementsLength(logTag + " findElement data length: ", elementArray[0])
                elementArray[0].performAction(actionName, args)
                    .then((res) => {
                        console.info(logTag + " performAction data: " + JSON.stringify(res))
                        var commonEventPublishData = { data: caseName, parameters: {res: res} }
                        publishEvent(commonEventPublishData)
                    })
                    .catch((error) => {
                        console.info(logTag + ' performAction failed. Cause: ' + JSON.stringify(error))
                        return
                    })
            })
            .catch((error) => {
                console.info(logTag + ' findElement failed. Cause: ' + JSON.stringify(error))
                return
            })
    })
}

function getWindowRootElementCallBack1(context, caseName, value, actionName) {
    let logTag = LOG_PREFIX + ' CASE ' + caseName
    context.getWindowRootElement((err, elements) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement error: " + JSON.stringify(err))
        }
        printElementsLength(logTag + " getWindowRootElement elements length: ", elements)
        elements.findElement('content', value)
            .then((elementArray) => {
                printElementsLength(logTag + " findElement data length: ", elementArray[0])
                elementArray[0].performAction(actionName, (err, res) => {
                    if (err?.code) {
                        console.info(logTag + " performAction failed. Cause: " + JSON.stringify(err))
                    }
                    console.info(logTag + " performAction data: " + JSON.stringify(res))
                    var commonEventPublishData = { data: caseName, parameters: {res: res} }
                    publishEvent(commonEventPublishData)
                })
            })
            .catch((error) => {
                console.info(logTag + ' findElement failed. Cause: ' + JSON.stringify(error))
                return
            })
    })
}

function getWindowRootElementCallBack2(context, caseName, value, actionName, args?) {
    let logTag = LOG_PREFIX + ' CASE ' + caseName
    context.getWindowRootElement((err, elements) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement error: " + JSON.stringify(err))
        }
        printElementsLength(logTag + " getWindowRootElement elements length: ", elements)
        elements.findElement('content', value)
            .then((elementArray) => {
                printElementsLength(logTag + " findElement data length: ", elementArray[0])
                elementArray[0].performAction(actionName, args, (err, res) => {
                    if (err?.code) {
                        console.info(logTag + " performAction failed. Cause: " + JSON.stringify(err))
                    }
                    console.info(logTag + " performAction data: " + JSON.stringify(res))
                    var commonEventPublishData = { data: caseName, parameters: {res: res} }
                    publishEvent(commonEventPublishData)
                })
            })
            .catch((error) => {
                console.info(logTag + ' findElement failed. Cause: ' + JSON.stringify(error))
                return
            })
    })
}


function publishEvent(commonEventPublishData) {
    console.info(LOG_PREFIX + 'publishEvent data : ' + JSON.stringify(commonEventPublishData))
    try {
        commonEvent.publish(EVENT_NAME_BACK, commonEventPublishData, (err, data) => {
            if (err.code != 0) {
                console.info(LOG_PREFIX + 'failed to publish because ' + JSON.stringify(err))
                return
            }
            console.info(LOG_PREFIX + ' publish success')
        })
    } catch (e) {
        console.info(LOG_PREFIX + '[publishEvent]  error' + e.message)
    }
}

function printElements(logTag, res) {
    res.attributeNames().then((names) => {
        printLongText(logTag + "actionNames ", JSON.stringify(names))
        names.forEach((val) => {
            console.info(logTag + "attributeName: " + val)
            res.attributeValue(val).then((vales) => {
                console.info(logTag + "attributeName: " + val + "  attributeValue: ", JSON.stringify(vales))
            }).catch((err) => {
                console.info(logTag + "attributeValue err=" + JSON.stringify(err))
            })
        })
    }).catch((err) => {
        console.info(logTag + "attributeNames err=" + JSON.stringify(err))
    })

    res.actionNames().then((act) => {
        printLongText(logTag + "actionNames ", JSON.stringify(act))
    }).catch((err) => {
        console.info(logTag + "actionNames err=" + JSON.stringify(err))
    })
}

function printElementsLength(logTag, res) {
    res.attributeNames().then((names) => {
        console.info(logTag + "attributeNames length: " + names.length)
    }).catch((err) => {
        console.info(logTag + "attributeNames err=" + JSON.stringify(err))
    })
}

function printLongText(logTag, res) {
    let resJson = JSON.stringify(res)
    if (resJson && resJson.length > 1000) {
        console.info(logTag + "result is too long")
        for (let index = 0;index < resJson.length / 1000; index++) {
            let outJson = resJson.slice(index * 1000, (index + 1) * 1000)
            console.info(logTag + "result paragraph " + (index + 1) + "=" + outJson)
        }
    } else {
        console.info(logTag + "res=" + resJson)
    }
}

export default ServiceExtAbility