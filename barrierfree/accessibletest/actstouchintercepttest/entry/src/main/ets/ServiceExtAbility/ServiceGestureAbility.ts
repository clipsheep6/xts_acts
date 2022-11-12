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
import display from '@ohos.display'

const logTag = "[xtsLog]"
let Y_Height: number;
let Y_OneFourth: number;
let Y_ThreeFourth: number;
let Y_OneSecond: number;

let X_Width: number;
let X_OneFourth: number;
let X_ThreeFourth: number;
let X_OneSecond: number;

function getRandomNum(min, max): number {
    let range = max - min;
    let rand = Math.random();
    return (min + Math.round(range * rand));
}

const getDisplay = () => {
    const logTag = "[Unblocking Test] Accessibility getDisplay ";
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + "getDefaultDisplay err=" + JSON.stringify(err));
            return;
        }
        console.info(logTag + "getDefaultDisplay Width:" + data.width + " Height: " + data.height);
        X_Width = data.width;
        X_OneFourth = Math.round(X_Width / 4);
        X_ThreeFourth = Math.round(X_OneFourth * 3);
        X_OneSecond = Math.round(X_Width / 2);
        console.info(logTag + " X_OneFourth :" + X_OneFourth);
        console.info(logTag + " X_ThreeFourth :" + X_ThreeFourth + " X_OneSecond: " + X_OneSecond);

        Y_Height = data.height;
        Y_OneFourth = Math.round(Y_Height / 4);
        Y_ThreeFourth = Math.round(Y_OneFourth * 3);
        Y_OneSecond = Math.round(Y_Height / 2);
        console.info(logTag + " Y_OneFourth :" + Y_OneFourth);
        console.info(logTag + " Y_ThreeFourth :" + Y_ThreeFourth + " Y_OneSecond: " + Y_OneSecond);
    })
}

function gestureInjectCallback(logTag, caseName, context, gesturePathDefineList) {
    const log = logTag + caseName
    context.injectGesture(gesturePathDefineList, (err) => {
        if (err?.code) {
            console.info(log + "injectGesture Callback err=" + JSON.stringify(err));
            return;
        }
        console.info(log + "injectGesture Callback success" );
    });
}

//1.up
const TouchIntercept_0010 = (context, caseName) => {
    let Y_Start: number = Y_ThreeFourth + 100;
    let gesturePath = new GesturePath(100);
    gesturePath.points.push(new GesturePoint(X_OneSecond, Y_Start),
                            new GesturePoint(X_OneSecond, Y_OneSecond),
                            new GesturePoint(X_OneSecond, Y_OneFourth));
    gestureInjectCallback(logTag, caseName, context, gesturePath);

}
//2.down
const TouchIntercept_0020 = (context, caseName) => {
    let Y_Start: number = Y_OneFourth - 100;
    let gesturePath = new GesturePath(100);
    gesturePath.points.push(new GesturePoint(X_OneSecond, Y_Start),
                            new GesturePoint(X_OneSecond, Y_OneSecond),
                            new GesturePoint(X_OneSecond, Y_ThreeFourth));
    gestureInjectCallback(logTag, caseName, context, gesturePath);

}
//3、Left
const TouchIntercept_0030 = (context, caseName) => {
    let X_Start: number = X_ThreeFourth + 100;
    let gesturePath = new GesturePath(100);
    gesturePath.points.push(new GesturePoint(X_Start, Y_OneSecond),
                            new GesturePoint(X_OneSecond, Y_OneSecond),
                            new GesturePoint(X_OneFourth, Y_OneSecond));
    gestureInjectCallback(logTag, caseName, context, gesturePath);

}
//4、Right
const TouchIntercept_0040 = (context, caseName) => {
    let X_Start: number = X_OneFourth - 100;
    let gesturePath = new GesturePath(100);
    gesturePath.points.push(new GesturePoint(X_Start, Y_OneSecond),
                            new GesturePoint(X_OneSecond, Y_OneSecond),
                            new GesturePoint(X_ThreeFourth, Y_OneSecond));
    gestureInjectCallback(logTag, caseName, context, gesturePath);

}
//5、LeftThenRight
const TouchIntercept_0050 = (context, caseName) => {
    let rangeXNum = getRandomNum(X_OneSecond, X_ThreeFourth);
    let rangeYNum = getRandomNum(Y_OneFourth, Y_OneSecond);
    let X_Start: number = X_ThreeFourth + 100;
    let gesturePath = new GesturePath(100);
    gesturePath.points.push(new GesturePoint(X_Start, Y_OneSecond),
                            new GesturePoint(X_OneSecond, Y_OneSecond),
                            new GesturePoint(X_OneFourth, Y_OneSecond),
                            new GesturePoint(rangeXNum, rangeYNum));
    gestureInjectCallback(logTag, caseName, context, gesturePath);

}
//6、RightThenLeft
const TouchIntercept_0060 = (context, caseName) => {
    let rangeXNum = getRandomNum(X_OneFourth, X_OneSecond);
    let rangeYNum = getRandomNum(Y_OneFourth, Y_OneSecond);
    let X_Start: number = X_OneFourth - 100;
    let gesturePath = new GesturePath(100);
    gesturePath.points.push(new GesturePoint(X_Start, Y_OneSecond),
                            new GesturePoint(X_OneSecond, Y_OneSecond),
                            new GesturePoint(X_ThreeFourth, Y_OneSecond),
                            new GesturePoint(rangeXNum, rangeYNum));
    gestureInjectCallback(logTag, caseName, context, gesturePath);

}
//7、UpThenDown
const TouchIntercept_0070 = (context, caseName) => {
    let rangeXNum = getRandomNum(X_OneSecond, X_OneSecond + 100);
    let rangeYNum = getRandomNum(Y_OneSecond, Y_ThreeFourth);
    let Y_Start: number = Y_ThreeFourth + 100;
    let gesturePath = new GesturePath(100);
    gesturePath.points.push(new GesturePoint(X_OneSecond, Y_Start),
                            new GesturePoint(X_OneSecond, Y_OneSecond),
                            new GesturePoint(X_OneSecond, Y_OneFourth),
                            new GesturePoint(rangeXNum, rangeYNum));
    gestureInjectCallback(logTag, caseName, context, gesturePath);

}
//8、DownThenUp
const TouchIntercept_0080 = (context, caseName) => {
    let rangeXNum = getRandomNum(X_OneSecond, X_ThreeFourth);
    let rangeYNum = getRandomNum(0, Y_OneFourth);
    let Y_Start: number = Y_OneFourth - 100;
    let gesturePath = new GesturePath(100);
    gesturePath.points.push(new GesturePoint(X_OneSecond, Y_Start),
                            new GesturePoint(X_OneSecond, Y_OneSecond),
                            new GesturePoint(X_OneSecond, Y_ThreeFourth),
                            new GesturePoint(rangeXNum, rangeYNum));
    gestureInjectCallback(logTag, caseName, context, gesturePath);

}

//9、LeftThenUp
const TouchIntercept_0090 = (context, caseName) => {
    let rangeXNum = getRandomNum(X_OneFourth, X_OneSecond);
    let rangeYNum = getRandomNum(0, Y_OneFourth);
    let X_Start: number = X_ThreeFourth + 100;
    let gesturePath = new GesturePath(100);
    gesturePath.points.push(new GesturePoint(X_Start, Y_ThreeFourth),
                            new GesturePoint(X_OneSecond, Y_ThreeFourth),
                            new GesturePoint(X_OneFourth, Y_ThreeFourth),
                            new GesturePoint(rangeXNum, rangeYNum));
    gestureInjectCallback(logTag, caseName, context, gesturePath);

}
//10、LeftThenDown
const TouchIntercept_0100 = (context, caseName) => {
    let rangeXNum = getRandomNum(X_OneFourth, X_OneSecond);
    let rangeYNum = getRandomNum(Y_OneSecond, Y_ThreeFourth);
    let X_Start: number = X_ThreeFourth + 100;
    let gesturePath = new GesturePath(100);
    gesturePath.points.push(new GesturePoint(X_Start, Y_OneFourth),
                            new GesturePoint(X_OneSecond, Y_OneFourth),
                            new GesturePoint(X_OneFourth, Y_OneFourth),
                            new GesturePoint(rangeXNum, rangeYNum));
    gestureInjectCallback(logTag, caseName, context, gesturePath);

}
//11、RightThenUp
const TouchIntercept_0110 = (context, caseName) => {
    let rangeXNum = getRandomNum(X_OneSecond, X_ThreeFourth);
    let rangeYNum = getRandomNum(0, Y_OneFourth);
    let X_Start: number = X_OneFourth - 100;
    let gesturePath = new GesturePath(100);
    gesturePath.points.push(new GesturePoint(X_Start, Y_ThreeFourth),
                            new GesturePoint(X_OneSecond, Y_ThreeFourth),
                            new GesturePoint(X_ThreeFourth, Y_ThreeFourth),
                            new GesturePoint(rangeXNum, rangeYNum));
    gestureInjectCallback(logTag, caseName, context, gesturePath);

}
//12、RightThenDown
const TouchIntercept_0120 = (context, caseName) => {
    let rangeXNum = getRandomNum(X_OneSecond, X_ThreeFourth);
    let rangeYNum = getRandomNum(Y_OneSecond, Y_ThreeFourth);
    let X_Start: number = X_OneFourth - 100;
    let gesturePath = new GesturePath(100);
    gesturePath.points.push(new GesturePoint(X_Start, Y_OneFourth),
                            new GesturePoint(X_OneSecond, Y_OneFourth),
                            new GesturePoint(X_ThreeFourth, Y_OneFourth),
                            new GesturePoint(rangeXNum, rangeYNum));
    gestureInjectCallback(logTag, caseName, context, gesturePath);

}

//13、UpThenLeft
const TouchIntercept_0130 = (context, caseName) => {
    let rangeXNum = getRandomNum(0, 200);
    let rangeYNum = getRandomNum(Y_OneFourth, Y_OneFourth + 50);
    let Y_Start: number = Y_OneSecond + X_OneFourth + 50;
    let gesturePath = new GesturePath(100);
    gesturePath.points.push(new GesturePoint(X_ThreeFourth, Y_Start),
                            new GesturePoint(X_ThreeFourth, Y_OneSecond),
                            new GesturePoint(X_ThreeFourth, Y_OneFourth),
                            new GesturePoint(rangeXNum, rangeYNum));
    gestureInjectCallback(logTag, caseName, context, gesturePath);

}
//14、UpThenRight
const TouchIntercept_0140 = (context, caseName) => {
    let rangeXNum = getRandomNum(X_ThreeFourth, X_ThreeFourth + 100);
    let rangeYNum = getRandomNum(Y_OneFourth, Y_OneFourth + 100);
    let Y_Start: number = Y_OneSecond + X_OneFourth + 50;
    let gesturePath = new GesturePath(100);
    gesturePath.points.push(new GesturePoint(X_OneFourth, Y_Start),
                            new GesturePoint(X_OneFourth, Y_OneSecond),
                            new GesturePoint(X_OneFourth, Y_OneFourth),
                            new GesturePoint(rangeXNum, rangeYNum));
    gestureInjectCallback(logTag, caseName, context, gesturePath);

}
//15、DownThenLeft
const TouchIntercept_0150 = (context, caseName) => {
    let rangeXNum = getRandomNum(0, 200);
    let rangeYNum = getRandomNum(Y_ThreeFourth - 100, Y_ThreeFourth);
    let Y_Start: number = Y_OneSecond - X_OneFourth - 50;
    let gesturePath = new GesturePath(100);
    gesturePath.points.push(new GesturePoint(X_ThreeFourth, Y_Start),
                            new GesturePoint(X_ThreeFourth, Y_OneSecond),
                            new GesturePoint(X_ThreeFourth, Y_ThreeFourth),
                            new GesturePoint(rangeXNum, rangeYNum));
    gestureInjectCallback(logTag, caseName, context, gesturePath);

}
//16、DownThenRight
const TouchIntercept_0160 = (context, caseName) => {
    let rangeXNum = getRandomNum(X_ThreeFourth, X_ThreeFourth + 100);
    let rangeYNum = getRandomNum(Y_ThreeFourth - 100, Y_ThreeFourth);
    let Y_Start: number = Y_OneSecond - X_OneFourth - 50;
    let gesturePath = new GesturePath(100);
    gesturePath.points.push(new GesturePoint(X_OneFourth, Y_Start),
                            new GesturePoint(X_OneFourth, Y_OneSecond),
                            new GesturePoint(X_OneFourth, Y_ThreeFourth),
                            new GesturePoint(rangeXNum, rangeYNum));
    gestureInjectCallback(logTag, caseName, context, gesturePath);

}
const TouchIntercept_0170 = (context, caseName) => {
    setTimeout(() => {
        TouchIntercept_0030(context, caseName)
        setTimeout(() => {
            TouchIntercept_0050(context, caseName)
            setTimeout(() => {
                TouchIntercept_0090(context, caseName)
                setTimeout(() => {
                    TouchIntercept_0100(context, caseName)
                }, 500)
            }, 500)
        }, 500)
    }, 500)

}
const TouchIntercept_0180 = (context, caseName) => {
    setTimeout(() => {
        TouchIntercept_0040(context, caseName)
        setTimeout(() => {
            TouchIntercept_0060(context, caseName)
            setTimeout(() => {
                TouchIntercept_0110(context, caseName)
                setTimeout(() => {
                    TouchIntercept_0120(context, caseName)
                }, 500)
            }, 500)
        }, 500)
    }, 500)

}
const TouchIntercept_0190 = (context, caseName) => {
    setTimeout(() => {
        TouchIntercept_0010(context, caseName)
        setTimeout(() => {
            TouchIntercept_0070(context, caseName)
            setTimeout(() => {
                TouchIntercept_0130(context, caseName)
                setTimeout(() => {
                    TouchIntercept_0140(context, caseName)
                }, 500)
            }, 500)
        }, 500)
    }, 500)

}
const TouchIntercept_0200 = (context, caseName) => {
    setTimeout(() => {
        TouchIntercept_0020(context, caseName)
        setTimeout(() => {
            TouchIntercept_0080(context, caseName)
            setTimeout(() => {
                TouchIntercept_0150(context, caseName)
                setTimeout(() => {
                    TouchIntercept_0160(context, caseName)
                }, 500)
            }, 500)
        }, 500)
    }, 500)
}

const TouchIntercept_0210 = (context, caseName) => {
    TouchIntercept_0010(context, caseName)

}
const TouchIntercept_0220 = (context, caseName) => {
    setTimeout(() => {
        TouchIntercept_0030(context, caseName)
        setTimeout(() => {
            TouchIntercept_0040(context, caseName)
            setTimeout(() => {
                TouchIntercept_0010(context, caseName)
                setTimeout(() => {
                    TouchIntercept_0160(context, caseName)
                }, 500)
            }, 500)
        }, 500)
    }, 500)
}

const TouchIntercept_0230 = (context, caseName) => {
    setTimeout(() => {
        TouchIntercept_0010(context, caseName)
        setTimeout(() => {
            TouchIntercept_0020(context, caseName)
            setTimeout(() => {
                TouchIntercept_0030(context, caseName)
                setTimeout(() => {
                    TouchIntercept_0040(context, caseName)
                    setTimeout(() => {
                        TouchIntercept_0050(context, caseName)
                        setTimeout(() => {
                            TouchIntercept_0060(context, caseName)
                            setTimeout(() => {
                                TouchIntercept_0070(context, caseName)
                                setTimeout(() => {
                                    TouchIntercept_0080(context, caseName)
                                    setTimeout(() => {
                                        TouchIntercept_0090(context, caseName)
                                        setTimeout(() => {
                                            TouchIntercept_0100(context, caseName)
                                            setTimeout(() => {
                                                TouchIntercept_0110(context, caseName)
                                                setTimeout(() => {
                                                    TouchIntercept_0120(context, caseName)
                                                    setTimeout(() => {
                                                        TouchIntercept_0130(context, caseName)
                                                        setTimeout(() => {
                                                            TouchIntercept_0140(context, caseName)
                                                            setTimeout(() => {
                                                                TouchIntercept_0150(context, caseName)
                                                                setTimeout(() => {
                                                                    TouchIntercept_0160(context, caseName)
                                                                }, 500)
                                                            }, 500)
                                                        }, 500)
                                                    }, 500)
                                                }, 500)
                                            }, 500)
                                        }, 500)
                                    }, 500)
                                }, 500)
                            }, 500)
                        }, 500)
                    }, 500)
                }, 500)
            }, 500)
        }, 500)
    }, 500)
}

const TouchIntercept_0240 = (context, caseName) => {
    TouchIntercept_0010(context, caseName)
}

const excuteMethod = (context, data) => {

    if (data) {
        switch (data) {
            case "TouchIntercept_0010" + "_on_assist_change_success":
                TouchIntercept_0010(context, "TouchIntercept_0010")
                break;
            case "TouchIntercept_0020" + "_on_assist_change_success":
                TouchIntercept_0020(context, "TouchIntercept_0020")
                break;
            case "TouchIntercept_0030" + "_on_assist_change_success":
                TouchIntercept_0030(context, "TouchIntercept_0030")
                break;
            case "TouchIntercept_0040" + "_on_assist_change_success":
                TouchIntercept_0040(context, "TouchIntercept_0040")
                break;
            case "TouchIntercept_0050" + "_on_assist_change_success":
                TouchIntercept_0050(context, "TouchIntercept_0050")
                break;
            case "TouchIntercept_0060" + "_on_assist_change_success":
                TouchIntercept_0060(context, "TouchIntercept_0060")
                break;
            case "TouchIntercept_0070" + "_on_assist_change_success":
                TouchIntercept_0070(context, "TouchIntercept_0070")
                break;
            case "TouchIntercept_0080" + "_on_assist_change_success":
                TouchIntercept_0080(context, "TouchIntercept_0080")
                break;
            case "TouchIntercept_0090" + "_on_assist_change_success":
                TouchIntercept_0090(context, "TouchIntercept_0090")
                break;
            case "TouchIntercept_0100" + "_on_assist_change_success":
                TouchIntercept_0100(context, "TouchIntercept_0100")
                break;
            case "TouchIntercept_0110" + "_on_assist_change_success":
                TouchIntercept_0110(context, "TouchIntercept_0110")
                break;
            case "TouchIntercept_0120" + "_on_assist_change_success":
                TouchIntercept_0120(context, "TouchIntercept_0120")
                break;
            case "TouchIntercept_0130" + "_on_assist_change_success":
                TouchIntercept_0130(context, "TouchIntercept_0130")
                break;
            case "TouchIntercept_0140" + "_on_assist_change_success":
                TouchIntercept_0140(context, "TouchIntercept_0140")
                break;
            case "TouchIntercept_0150" + "_on_assist_change_success":
                TouchIntercept_0150(context, "TouchIntercept_0150")
                break;
            case "TouchIntercept_0160" + "_on_assist_change_success":
                TouchIntercept_0160(context, "TouchIntercept_0160")
                break;
            case "TouchIntercept_0170" + "_on_assist_change_success":
                TouchIntercept_0170(context, "TouchIntercept_0170")
                break;
            case "TouchIntercept_0180" + "_on_assist_change_success":
                TouchIntercept_0180(context, "TouchIntercept_0180")
                break;
            case "TouchIntercept_0190" + "_on_assist_change_success":
                TouchIntercept_0190(context, "TouchIntercept_0190")
                break;
            case "TouchIntercept_0200" + "_on_assist_change_success":
                TouchIntercept_0200(context, "TouchIntercept_0200")
                break;
            case "TouchIntercept_0210" + "_on_assist_change_success":
                TouchIntercept_0210(context, "TouchIntercept_0210")
                break;
            case "TouchIntercept_0220" + "_on_assist_change_success":
                TouchIntercept_0220(context, "TouchIntercept_0220")
                break;
            case "TouchIntercept_0230" + "_on_assist_change_success":
                TouchIntercept_0230(context, "TouchIntercept_0230")
                break;
            case "TouchIntercept_0240" + "_on_assist_change_success":
                TouchIntercept_0240(context, "TouchIntercept_0240")
                break;
            default:
                break;
        }
    }
}

class ServiceExtAbility extends AccessibilityExtensionAbility {
    onConnect() {
        console.info(logTag + " GestureD onAbilityConnected");
        let context = this.context;
        var commonEventSubscribeInfo = {
            events: ["on_assist_change"]
        }
        function subscriberCallback(err, data) {
            console.info(logTag + "====>GestureD subscriberCallback start");
            console.info(logTag + "====>GestureD receive event err:" + JSON.stringify(err));
            console.info(logTag + "====>GestureD receive event data:" + JSON.stringify(data));
            excuteMethod(context, data.data);
            console.info(logTag + "====>GestureD subscriberCallback end");
        }
        var subscriber
        commonEvent.createSubscriber(commonEventSubscribeInfo).then(function (data) {
            console.info(logTag + "====> GestureD createSubscriber Start====")
            subscriber = data;
            commonEvent.subscribe(subscriber, subscriberCallback);
            console.info(logTag + "====> GestureD createSubscriber End====")
        })
        console.info(logTag + "====> GestureD onShow End====")
        getDisplay()
    }

    onAccessibilityEvent(accessibilityEvent) {
        printAccessibilityEvent(accessibilityEvent)

        switch (accessibilityEvent.eventType) {
            case "up":
                commonEventPublishOnAssistChange("TouchIntercept_0010");
                commonEventPublishOnAssistChange("TouchIntercept_0190");
                commonEventPublishOnAssistChangeAB("TouchIntercept_0210", 'A');
                commonEventPublishOnAssistChangeAB("TouchIntercept_0220", 'A');
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230", 'A');
                break;
            case "down":
                commonEventPublishOnAssistChange("TouchIntercept_0020");
                commonEventPublishOnAssistChange("TouchIntercept_0200");
                commonEventPublishOnAssistChangeAB("TouchIntercept_0220", 'A');
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230", 'A');
                break;
            case "left":
                commonEventPublishOnAssistChange("TouchIntercept_0030");
                commonEventPublishOnAssistChange("TouchIntercept_0170");
                commonEventPublishOnAssistChangeAB("TouchIntercept_0220", 'A');
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230", 'A');
                break;
            case "right":
                commonEventPublishOnAssistChange("TouchIntercept_0040");
                commonEventPublishOnAssistChange("TouchIntercept_0180");
                commonEventPublishOnAssistChangeAB("TouchIntercept_0220", 'A');
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230", 'A');
                break;
            case "leftThenRight":
                commonEventPublishOnAssistChange("TouchIntercept_0050");
                commonEventPublishOnAssistChange("TouchIntercept_0170");
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230", 'A');
                break;
            case "rightThenLeft":
                commonEventPublishOnAssistChange("TouchIntercept_0060");
                commonEventPublishOnAssistChange("TouchIntercept_0180");
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230", 'A');
                break;
            case "upThenDown":
                commonEventPublishOnAssistChange("TouchIntercept_0070");
                commonEventPublishOnAssistChange("TouchIntercept_0190");
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230", 'A');
                break;
            case "downThenUp":
                commonEventPublishOnAssistChange("TouchIntercept_0080");
                commonEventPublishOnAssistChange("TouchIntercept_0200");
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230", 'A');
                break;
            case "leftThenUp":
                commonEventPublishOnAssistChange("TouchIntercept_0090");
                commonEventPublishOnAssistChange("TouchIntercept_0170");
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230", 'A');
                break;
            case "leftThenDown":
                commonEventPublishOnAssistChange("TouchIntercept_0100");
                commonEventPublishOnAssistChange("TouchIntercept_0170");
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230", 'A');
                break;
            case "rightThenUp":
                commonEventPublishOnAssistChange("TouchIntercept_0110");
                commonEventPublishOnAssistChange("TouchIntercept_0180");
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230", 'A');
                break;
            case "rightThenDown":
                commonEventPublishOnAssistChange("TouchIntercept_0120");
                commonEventPublishOnAssistChange("TouchIntercept_0180");
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230", 'A');
                break;
            case "upThenLeft":
                commonEventPublishOnAssistChange("TouchIntercept_0130");
                commonEventPublishOnAssistChange("TouchIntercept_0190");
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230", 'A');
                break;
            case "upThenRight":
                commonEventPublishOnAssistChange("TouchIntercept_0140");
                commonEventPublishOnAssistChange("TouchIntercept_0190");
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230", 'A');
                break;
            case "downThenLeft":
                commonEventPublishOnAssistChange("TouchIntercept_0150");
                commonEventPublishOnAssistChange("TouchIntercept_0200");
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230", 'A');
                break;
            case "downThenRight":
                commonEventPublishOnAssistChange("TouchIntercept_0160");
                commonEventPublishOnAssistChange("TouchIntercept_0200");
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230", 'A');
                break;
            default:
                break;
        }
    }

    onKeyEvent(keyEvent) {
        console.info(logTag + " GestureD onKeyEvent");
        console.info(logTag + " onKeyEvent KeyInterception GestureD  : " + JSON.stringify(keyEvent));
        return false;
    }
}

const commonEventPublishOnAssistChange = (caseName) => {

    function publishCallback(err) {
        console.info(logTag + "on_assist_change_extra onAbilityConnected publish call back result:" + JSON.stringify(err));
    }

    var commonEventPublishData = {
        data: caseName + "_on_assist_change_extra_success",
    }
    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
}
const commonEventPublishOnAssistChangeAB = (caseName, typename) => {

    function publishCallback(err) {
        console.info(logTag + "on_assist_change_extra onAbilityConnected publish call back result:" + JSON.stringify(err));
    }

    var commonEventPublishData = {
        data: caseName + "_on_assist_change_extra_success_" + typename,
    }
    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
}
const printAccessibilityEvent = (accessibilityEvent) => {
    console.info(logTag + "GestureD onAccessibilityEvent Start");
    console.info(logTag + "GestureD onAccessibilityEvent accessibilityEvent=" + JSON.stringify(accessibilityEvent));
    console.info(logTag + "GestureD onAccessibilityEvent End");
}

export default ServiceExtAbility
