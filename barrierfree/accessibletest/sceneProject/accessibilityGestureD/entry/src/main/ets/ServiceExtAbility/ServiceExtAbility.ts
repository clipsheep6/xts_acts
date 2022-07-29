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

const logTag = "[xtsLog]"

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
    let GesturePath = {
        points: [
            { positionX: 372, positionY: 1053 },
            { positionX: 355, positionY: 873 },
            { positionX: 320, positionY: 558 },
            { positionX: 296, positionY: 314 },
            { positionX: 285, positionY: 163 }
        ],
        durationTime: 300
    }
    gestureInjectCallback(logTag, caseName, context, GesturePath);

}
//2.down
const TouchIntercept_0020 = (context, caseName) => {
    let GesturePath = {
        points: [
            { positionX: 352, positionY: 250 },
            { positionX: 371, positionY: 462 },
            { positionX: 377, positionY: 828 },
            { positionX: 378, positionY: 956 },
            { positionX: 385, positionY: 1121 }
        ],
        durationTime: 300
    }
    gestureInjectCallback(logTag, caseName, context, GesturePath);

}
//3、Left
const TouchIntercept_0030 = (context, caseName) => {
    let GesturePath = {
        points: [
            { positionX: 676, positionY: 735 },
            { positionX: 567, positionY: 729 },
            { positionX: 444, positionY: 719 },
            { positionX: 255, positionY: 714 },
            { positionX: 153, positionY: 715 },
            { positionX: 15, positionY: 729 },
        ],
        durationTime: 300
    }

    gestureInjectCallback(logTag, caseName, context, GesturePath);

}
//4、Right
const TouchIntercept_0040 = (context, caseName) => {
    let GesturePath = {
        points: [
            { positionX: 77, positionY: 589 },
            { positionX: 185, positionY: 589 },
            { positionX: 318, positionY: 589 },
            { positionX: 499, positionY: 589 },
            { positionX: 630, positionY: 588 }
        ],
        durationTime: 300
    }

    gestureInjectCallback(logTag, caseName, context, GesturePath);

}
//5、LeftThenRight
const TouchIntercept_0050 = (context, caseName) => {
    let GesturePath = {
        points: [
            { positionX: 685, positionY: 798 },
            { positionX: 575, positionY: 792 },
            { positionX: 446, positionY: 785 },
            { positionX: 285, positionY: 784 },
            { positionX: 206, positionY: 785 },
            { positionX: 87, positionY: 787 },
            { positionX: 401, positionY: 772 },
            { positionX: 535, positionY: 786 },
            { positionX: 714, positionY: 806 },
        ],
        durationTime: 300
    }
    gestureInjectCallback(logTag, caseName, context, GesturePath);

}
//6、RightThenLeft
const TouchIntercept_0060 = (context, caseName) => {
    let GesturePath = {
        points: [
            { positionX: 174, positionY: 731 },
            { positionX: 251, positionY: 743 },
            { positionX: 393, positionY: 772 },
            { positionX: 673, positionY: 817 },
            { positionX: 591, positionY: 805 },
            { positionX: 511, positionY: 791 },
            { positionX: 423, positionY: 779 },
            { positionX: 333, positionY: 768 },
            { positionX: 244, positionY: 764 },
            { positionX: 167, positionY: 759 },
            { positionX: 71, positionY: 755 }
        ],
        durationTime: 300
    }
    gestureInjectCallback(logTag, caseName, context, GesturePath);

}
//7、UpThenDown
const TouchIntercept_0070 = (context, caseName) => {
    let GesturePath = {
        points: [
            { positionX: 377, positionY: 1047 },
            { positionX: 368, positionY: 863 },
            { positionX: 355, positionY: 564 },
            { positionX: 339, positionY: 353 },
            { positionX: 331, positionY: 210 },
            { positionX: 361, positionY: 409 },
            { positionX: 375, positionY: 665 },
            { positionX: 380, positionY: 824 },
            { positionX: 386, positionY: 977 },
            { positionX: 393, positionY: 1177 },
        ],
        durationTime: 300
    }
    gestureInjectCallback(logTag, caseName, context, GesturePath);

}
//8、DownThenUp
const TouchIntercept_0080 = (context, caseName) => {
    let GesturePath = {
        points: [
            { positionX: 321, positionY: 213 },
            { positionX: 346, positionY: 407 },
            { positionX: 354, positionY: 664 },
            { positionX: 356, positionY: 833 },
            { positionX: 358, positionY: 970 },
            { positionX: 349, positionY: 603 },
            { positionX: 344, positionY: 450 },
            { positionX: 342, positionY: 304 },
            { positionX: 340, positionY: 115 },
        ],
        durationTime: 300
    }
    gestureInjectCallback(logTag, caseName, context, GesturePath);

}

//9、LeftThenUp
const TouchIntercept_0090 = (context, caseName) => {
    let GesturePath = {
        points: [
            { positionX: 2500, positionY: 2500 },
            { positionX: 1500, positionY: 2500 },
            { positionX: 0, positionY: 2500 },
            { positionX: 1000, positionY: 0 },
        ],
        durationTime: 300
    }
    gestureInjectCallback(logTag, caseName, context, GesturePath);

}
//10、LeftThenDown
const TouchIntercept_0100 = (context, caseName) => {
    let GesturePath = {
        points: [
            { positionX: 583, positionY: 520 },
            { positionX: 468, positionY: 485 },
            { positionX: 377, positionY: 456 },
            { positionX: 289, positionY: 435 },
            { positionX: 283, positionY: 626 },
            { positionX: 308, positionY: 836 },
            { positionX: 335, positionY: 1108 },

        ],
        durationTime: 300
    }
    gestureInjectCallback(logTag, caseName, context, GesturePath);

}
//11、RightThenUp
const TouchIntercept_0110 = (context, caseName) => {
    let GesturePath = {
        points: [
            { positionX: 2500, positionY: 2500 },
            { positionX: 3500, positionY: 2500 },
            { positionX: 5000, positionY: 2500 },
            { positionX: 4000, positionY: 0 },
        ],
        durationTime: 300
    }
    gestureInjectCallback(logTag, caseName, context, GesturePath);

}
//12、RightThenDown
const TouchIntercept_0120 = (context, caseName) => {
    let GesturePath = {
        points: [
            { positionX: 204, positionY: 501 },
            { positionX: 307, positionY: 486 },
            { positionX: 422, positionY: 478 },
            { positionX: 547, positionY: 604 },
            { positionX: 440, positionY: 771 },
            { positionX: 348, positionY: 906 },
        ],
        durationTime: 300
    }
    gestureInjectCallback(logTag, caseName, context, GesturePath);

}

//13、UpThenLeft
const TouchIntercept_0130 = (context, caseName) => {
    let GesturePath = {
        points: [
            { positionX: 437, positionY: 1139 },
            { positionX: 437, positionY: 985 },
            { positionX: 453, positionY: 739 },
            { positionX: 466, positionY: 591 },
            { positionX: 483, positionY: 455 },
            { positionX: 489, positionY: 321 },
            { positionX: 383, positionY: 274 },
            { positionX: 258, positionY: 273 },
            { positionX: 179, positionY: 276 },
            { positionX: 102, positionY: 286 },
            { positionX: 3, positionY: 298 },
        ],
        durationTime: 300
    }
    gestureInjectCallback(logTag, caseName, context, GesturePath);

}
//14、UpThenRight
const TouchIntercept_0140 = (context, caseName) => {
    let GesturePath = {
        points: [
            { positionX: 332, positionY: 1143 },
            { positionX: 322, positionY: 973 },
            { positionX: 300, positionY: 779 },
            { positionX: 276, positionY: 627 },
            { positionX: 259, positionY: 496 },
            { positionX: 375, positionY: 406 },
            { positionX: 468, positionY: 409 },
            { positionX: 704, positionY: 436 },
        ],
        durationTime: 300
    }
    gestureInjectCallback(logTag, caseName, context, GesturePath);

}
//15、DownThenLeft
const TouchIntercept_0150 = (context, caseName) => {
    let GesturePath = {
        points: [
            { positionX: 404, positionY: 177 },
            { positionX: 406, positionY: 318 },
            { positionX: 405, positionY: 459 },
            { positionX: 415, positionY: 764 },
            { positionX: 432, positionY: 910 },
            { positionX: 335, positionY: 935 },
            { positionX: 262, positionY: 934 },
            { positionX: 182, positionY: 933 },
            { positionX: 24, positionY: 929 },
        ],
        durationTime: 300
    }
    gestureInjectCallback(logTag, caseName, context, GesturePath);

}
//16、DownThenRight
const TouchIntercept_0160 = (context, caseName) => {
    let GesturePath = {
        points: [
            { positionX: 317, positionY: 247 },
            { positionX: 318, positionY: 393 },
            { positionX: 299, positionY: 614 },
            { positionX: 280, positionY: 766 },
            { positionX: 278, positionY: 919 },
            { positionX: 419, positionY: 961 },
            { positionX: 502, positionY: 957 },
            { positionX: 627, positionY: 939 },

        ],
        durationTime: 300
    }
    gestureInjectCallback(logTag, caseName, context, GesturePath);

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