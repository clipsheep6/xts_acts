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
import commonEvent from '@ohos.commonEvent'
import AccessibilityExtensionAbility from '@ohos.application.AccessibilityExtensionAbility'
import display from '@ohos.display';

const logTag = "[xtsLog]"
let backArray = []
const printWindowsElements = (log, res) => {
    res.forEach((val) => {
        printElements(log, val);
    });
}

const printElements = (log, res) => {
    backArray = [];
    res.attributeNames().then((names) => {
        printLongText(log + "actionNames ", JSON.stringify(names));
        names.forEach((val) => {
            if(val){
                names.forEach((name) => {
                    if(backArray.indexOf(name)==-1){
                        backArray.push(name)
                    }
                })
            }
        });
    }).catch((err) => {
        console.error(log + "attributeNames err=" + JSON.stringify(err));
    });
}

const excuteMethod = (context, data) => {
    if (data) {
        switch (data) {
            case "WindowInfoGet_0010" + "_on_assist_change_success":
                WindowInfoGet_0010(context, "WindowInfoGet_0010")
                break;
            case "WindowInfoGet_0011" + "_on_assist_change_success":
                WindowInfoGet_0011(context, "WindowInfoGet_0011")
                break;
            case "WindowInfoGet_0020" + "_on_assist_change_success":
                WindowInfoGet_0020(context, "WindowInfoGet_0020")
                break;
            case "WindowInfoGet_0030" + "_on_assist_change_success":
                WindowInfoGet_0030(context, "WindowInfoGet_0030")
                break;
            case "WindowInfoGet_0031" + "_on_assist_change_success":
                WindowInfoGet_0031(context, "WindowInfoGet_0031")
                break;
            case "WindowInfoGet_0040" + "_on_assist_change_success":
                WindowInfoGet_0040(context, "WindowInfoGet_0040")
                break;
            case "WindowInfoGet_0050" + "_on_assist_change_success":
                WindowInfoGet_0050(context, "WindowInfoGet_0050")
                break;
            case "WindowInfoGet_0051" + "_on_assist_change_success":
                WindowInfoGet_0051(context, "WindowInfoGet_0051")
                break;
            case "WindowInfoGet_0060" + "_on_assist_change_success":
                WindowInfoGet_0060(context, "WindowInfoGet_0060")
                break;
            case "WindowInfoGet_0070" + "_on_assist_change_success":
                WindowInfoGet_0070(context, "WindowInfoGet_0070")
                break;
            case "WindowInfoGet_0071" + "_on_assist_change_success":
                WindowInfoGet_0071(context, "WindowInfoGet_0071")
                break;
            case "WindowInfoGet_0080" + "_on_assist_change_success":
                WindowInfoGet_0080(context, "WindowInfoGet_0080")
                break;
            case "WindowInfoGet_0090" + "_on_assist_change_success":
                WindowInfoGet_0090(context, "WindowInfoGet_0090")
                break;
            case "WindowInfoGet_0091" + "_on_assist_change_success":
                WindowInfoGet_0091(context, "WindowInfoGet_0091")
                break;
            case "WindowInfoGet_0100" + "_on_assist_change_success":
                WindowInfoGet_0100(context, "WindowInfoGet_0100")
                break;
            case "WindowInfoGet_0110" + "_on_assist_change_success":
                WindowInfoGet_0110(context, "WindowInfoGet_0110")
                break;
            case "WindowInfoGet_0111" + "_on_assist_change_success":
                WindowInfoGet_0111(context, "WindowInfoGet_0111")
                break;
            case "WindowInfoGet_0120" + "_on_assist_change_success":
                WindowInfoGet_0120(context, "WindowInfoGet_0120")
                break;
            case "WindowInfoGet_0130" + "_on_assist_change_success":
                WindowInfoGet_0130(context, "WindowInfoGet_0130")
                break;
            case "WindowInfoGet_0131" + "_on_assist_change_success":
                WindowInfoGet_0131(context, "WindowInfoGet_0131")
                break;
            case "WindowInfoGet_0140" + "_on_assist_change_success":
                WindowInfoGet_0140(context, "WindowInfoGet_0140")
                break;
            case "WindowInfoGet_0150" + "_on_assist_change_success":
                WindowInfoGet_0150(context, "WindowInfoGet_0150")
                break;
            case "WindowInfoGet_0151" + "_on_assist_change_success":
                WindowInfoGet_0151(context, "WindowInfoGet_0151")
                break;
            case "WindowInfoGet_0160" + "_on_assist_change_success":
                WindowInfoGet_0160(context, "WindowInfoGet_0160")
                break;
            case "WindowInfoGet_0190" + "_on_assist_change_success":
                WindowInfoGet_0190(context, "WindowInfoGet_0190")
                break;
            case "WindowInfoGet_0200" + "_on_assist_change_success":
                WindowInfoGet_0200(context, "WindowInfoGet_0200")
                break;
            case "WindowInfoGet_0210" + "_on_assist_change_success":
                WindowInfoGet_0210(context, "WindowInfoGet_0210")
                break;
            case "WindowInfoGet_0220" + "_on_assist_change_success":
                WindowInfoGet_0220(context, "WindowInfoGet_0220")
                break;
            case "WindowInfoGet_0230" + "_on_assist_change_success":
                WindowInfoGet_0230(context, "WindowInfoGet_0230")
                break;
            case "WindowInfoGet_0240" + "_on_assist_change_success":
                WindowInfoGet_0240(context, "WindowInfoGet_0240")
                break;
            case "WindowInfoGet_0250" + "_on_assist_change_success":
                WindowInfoGet_0250(context, "WindowInfoGet_0250")
                break;
            case "WindowInfoGet_0260" + "_on_assist_change_success":
                WindowInfoGet_0260(context, "WindowInfoGet_0260")
                break;
            case "WindowInfoGet_0270" + "_on_assist_change_success":
                WindowInfoGet_0270(context, "WindowInfoGet_0270")
                break;
            case "WindowInfoGet_0280" + "_on_assist_change_success":
                WindowInfoGet_0280(context, "WindowInfoGet_0280")
                break;
            case "WindowInfoGet_0290" + "_on_assist_change_success":
                WindowInfoGet_0290(context, "WindowInfoGet_0290")
                break;
            case "WindowInfoGet_0300" + "_on_assist_change_success":
                WindowInfoGet_0300(context, "WindowInfoGet_0300")
                break;
            case "WindowInfoGet_0301" + "_on_assist_change_success":
                WindowInfoGet_0301(context, "WindowInfoGet_0301")
                break;
            case "WindowInfoGet_0302" + "_on_assist_change_success":
                WindowInfoGet_0302(context, "WindowInfoGet_0302")
                break;
            case "WindowInfoGet_0303" + "_on_assist_change_success":
                WindowInfoGet_0303(context, "WindowInfoGet_0303")
                break;
            case "WindowInfoGet_0304" + "_on_assist_change_success":
                WindowInfoGet_0304(context, "WindowInfoGet_0304")
                break;
            case "WindowInfoGet_0305" + "_on_assist_change_success":
                WindowInfoGet_0305(context, "WindowInfoGet_0305")
                break;
            case "WindowInfoGet_0306" + "_on_assist_change_success":
                WindowInfoGet_0306(context, "WindowInfoGet_0306")
                break;
            case "WindowInfoGet_0307" + "_on_assist_change_success":
                WindowInfoGet_0307(context, "WindowInfoGet_0307")
                break;
            case "WindowInfoGet_0308" + "_on_assist_change_success":
                WindowInfoGet_0308(context, "WindowInfoGet_0308")
                break;


        }
    }
}


const WindowInfoGet_0010 = (context, caseName) => {
    getWindowsCallback(context, caseName)

}

const WindowInfoGet_0011 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdCallback(context, displayId, caseName)
    });
}

const WindowInfoGet_0020 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdPromise(context, displayId, caseName)
    });
}

const WindowInfoGet_0030 = (context, caseName) => {
    getWindowsCallback(context, caseName)


}

const WindowInfoGet_0031 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdCallback(context, displayId, caseName)
    });
}

const WindowInfoGet_0040 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdPromise(context, displayId, caseName)
    });
}

const WindowInfoGet_0050 = (context, caseName) => {
    getWindowsCallBackExecutePerformAction(context, caseName, 'WindowInfo', 'click')
}

const WindowInfoGet_0051 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdCallBackExecutePerformAction(context, displayId, caseName, 'WindowInfo', 'click')

    });
}

const WindowInfoGet_0060 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;

        getWindowsByIdPromiseExecutePerformAction(context, displayId, caseName, 'WindowInfo', 'click')
    });
}

const WindowInfoGet_0070 = (context, caseName) => {
    getWindowsCallback(context, caseName)

}

const WindowInfoGet_0071 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdCallback(context, displayId, caseName)
    });
}

const WindowInfoGet_0080 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdPromise(context, displayId, caseName)
    });
}

const WindowInfoGet_0090 = (context, caseName) => {
    getWindowsCallBackExecutePerformAction(context, caseName, 'WindowInfo', 'click')

}

const WindowInfoGet_0091 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdPromiseExecutePerformAction(context, displayId, caseName, 'WindowInfo', 'click')
    });
}

const WindowInfoGet_0100 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdPromiseExecutePerformAction(context, displayId, caseName, 'WindowInfo', 'click')
    });
}

const WindowInfoGet_0110 = (context, caseName) => {
    getWindowsCallback(context, caseName)

}

const WindowInfoGet_0111 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdCallback(context, displayId, caseName)
    });
}

const WindowInfoGet_0120 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdPromise(context, displayId, caseName)
    });
}

const WindowInfoGet_0130 = (context, caseName) => {
    getWindowsCallback(context, caseName)
}

const WindowInfoGet_0131 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdCallback(context, displayId, caseName)
    });
}

const WindowInfoGet_0140 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdPromise(context, displayId, caseName)
    });
}

const WindowInfoGet_0150 = (context, caseName) => {
    getWindowsCallback(context, caseName)

}

const WindowInfoGet_0151 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdCallback(context, displayId, caseName)
    });
}

const WindowInfoGet_0160 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdPromise(context, displayId, caseName)
    });
}

const WindowInfoGet_0190 = (context, caseName) => {
    getWindowsAndRootElementCallback(context, caseName)

}

const WindowInfoGet_0200 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdAndRootElementCallback(context, displayId, caseName)
    });
}

const WindowInfoGet_0210 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdAndRootElementPromise(context, displayId, caseName)
    });
}

const WindowInfoGet_0220 = (context, caseName) => {
    getWindowsAndParentCallback(context, caseName)

}

const WindowInfoGet_0230 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdAndParentCallback(context, displayId, caseName)
    });
}

const WindowInfoGet_0240 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdAndParentPromise(context, displayId, caseName)
    });
}

const WindowInfoGet_0250 = (context, caseName) => {
    getWindowsAndRootElementCallback(context, caseName)

}

const WindowInfoGet_0260 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdAndRootElementCallback(context, displayId, caseName)
    });
}

const WindowInfoGet_0270 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdAndRootElementPromise(context, displayId, caseName)
    });
}

const WindowInfoGet_0280 = (context, caseName) => {
    getWindowsAndParentCallback(context, caseName)

}

const WindowInfoGet_0290 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdAndParentCallback(context, displayId, caseName)
    });
}

const WindowInfoGet_0300 = (context, caseName) => {

    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdAndParentPromise(context, displayId, caseName)
    });
}
const WindowInfoGet_0301 = (context, caseName) => {

    getWindowsAndWindowIdCallback(context, caseName)
}

const WindowInfoGet_0302 = (context, caseName) => {

    getWindowsAndIsActiveCallback(context, caseName)
}

const WindowInfoGet_0303 = (context, caseName) => {

    getWindowsAndScreenRectCallback(context, caseName)
}
const WindowInfoGet_0304 = (context, caseName) => {

    getWindowsAndLayerCallback(context, caseName)
}

const WindowInfoGet_0305 = (context, caseName) => {
    getWindowsAndTypeCallback(context, caseName)

}
const WindowInfoGet_0306 = (context, caseName) => {

    getWindowsAndAnchorCallback(context, caseName)
}
const WindowInfoGet_0307 = (context, caseName) => {

    getWindowsAndIsFocusedCallback(context, caseName)
}
const WindowInfoGet_0308 = (context, caseName) => {

    getWindowsAndComponentIdCallback(context, caseName)
}
const getWindowsAndRootElementCallback = (context, caseName) => {
    const Log = logTag + caseName + "getWindowsAndRootElementCallback ";
    console.error(logTag + "Start");
    context.getWindows((err, res) => {
        if (err?.code) {
            console.error(Log + "execute err=" + JSON.stringify(err));
            return;
        }
        printWindowsElements(Log, res);
        setTimeout(() => {
            console.error(Log + " backArray = " + JSON.stringify(backArray));
            if(backArray.find(o => o === "rootElement")){
                commonEventPublishOnAssistChange(caseName)
            };
        }, 4000)
    });
    console.error(Log + "End");
}

const getWindowsByIdAndRootElementCallback = (context, displayId, caseName) => {
    const Log = logTag + caseName + "getWindowsByIdAndRootElementCallback ";
    console.error(Log + "Start");
    context.getWindows(displayId, (err, res) => {
        if (err?.code) {
            console.error(Log + "execute err=" + JSON.stringify(err));
            return;
        }
        printWindowsElements(Log, res);
        setTimeout(() => {
            console.error(Log + " backArray = " + JSON.stringify(backArray));
            if(backArray.find(o => o==="rootElement")){
                commonEventPublishOnAssistChange(caseName)
            };
        }, 4000)
    });
    console.error(Log + "End");
}

const getWindowsByIdAndRootElementPromise = (context, displayId, caseName) => {
    const Log = logTag + caseName + "getWindowsByIdAndRootElementPromise ";
    console.error(logTag + "Start");
    context.getWindows(displayId).then((res) => {
        printWindowsElements(Log, res);
        setTimeout(() => {
            console.error(Log + " backArray = " + JSON.stringify(backArray));
            if(backArray.find(o => o === "rootElement")){
                commonEventPublishOnAssistChange(caseName)
            };
        }, 4000)
    }).catch((err) => {
        console.error(Log + "execute err=" + JSON.stringify(err));
    });
    console.error(Log + "End");
}

const getWindowsAndScreenRectCallback = (context, caseName) => {
    const Log = logTag + caseName + "getWindowsAndScreenRectCallback ";
    console.error(logTag + "Start");
    context.getWindows((err, res) => {
        if (err?.code) {
            console.error(Log + "execute err=" + JSON.stringify(err));
            return;
        }
        printWindowsElements(Log, res);
        setTimeout(() => {
            console.error(Log + " backArray = " + JSON.stringify(backArray));
            if(backArray.find(o => o === "screenRect")){
                commonEventPublishOnAssistChange(caseName)
            };
        }, 4000)
    });
    console.error(Log + "End");
}

const getWindowsAndComponentIdCallback = (context, caseName) => {
    const Log = logTag + caseName + "getWindowsAndComponentIdCallback ";
    console.error(logTag + "Start");
    context.getWindows((err, res) => {
        if (err?.code) {
            console.error(Log + "execute err=" + JSON.stringify(err));
            return;
        }
        printWindowsElements(Log, res);
        setTimeout(() => {
            console.error(Log + " backArray = " + JSON.stringify(backArray));
            if(backArray.find(o => o === "componentId")){
                commonEventPublishOnAssistChange(caseName)
            };
        }, 4000)
    });
    console.error(Log + "End");
}

const getWindowsAndIsFocusedCallback = (context, caseName) => {
    const Log = logTag + caseName + "getWindowsAndIsFocusedCallback ";
    console.error(logTag + "Start");
    context.getWindows((err, res) => {
        if (err?.code) {
            console.error(Log + "execute err=" + JSON.stringify(err));
            return;
        }
        printWindowsElements(Log, res);
        setTimeout(() => {
            console.error(Log + " backArray = " + JSON.stringify(backArray));
            if(backArray.find(o => o === "isFocused")){
                commonEventPublishOnAssistChange(caseName)
            };
        }, 4000)
    });
    console.error(Log + "End");
}

const getWindowsAndAnchorCallback = (context, caseName) => {
    const Log = logTag + caseName + "getWindowsAndAnchorCallback ";
    console.error(logTag + "Start");
    context.getWindows((err, res) => {
        if (err?.code) {
            console.error(Log + "execute err=" + JSON.stringify(err));
            return;
        }
        printWindowsElements(Log, res);
        setTimeout(() => {
            console.error(Log + " backArray = " + JSON.stringify(backArray));
            if(backArray.find(o => o === "anchor")){
                commonEventPublishOnAssistChange(caseName)
            };
        }, 4000)
    });
    console.error(Log + "End");
}

const getWindowsAndTypeCallback = (context, caseName) => {
    const Log = logTag + caseName + "getWindowsAndTypeCallback ";
    console.error(logTag + "Start");
    context.getWindows((err, res) => {
        if (err?.code) {
            console.error(Log + "execute err=" + JSON.stringify(err));
            return;
        }
        printWindowsElements(Log, res);
        setTimeout(() => {
            console.error(Log + " backArray = " + JSON.stringify(backArray));
            if(backArray.find(o => o === "type")){
                commonEventPublishOnAssistChange(caseName)
            };
        }, 4000)
    });
    console.error(Log + "End");
}

const getWindowsAndLayerCallback = (context, caseName) => {
    const Log = logTag + caseName + "getWindowsAndLayerCallback ";
    console.error(logTag + "Start");
    context.getWindows((err, res) => {
        if (err?.code) {
            console.error(Log + "execute err=" + JSON.stringify(err));
            return;
        }
        printWindowsElements(Log, res);
        setTimeout(() => {
            console.error(Log + " backArray = " + JSON.stringify(backArray));
            if(backArray.find(o => o === "layer")){
                commonEventPublishOnAssistChange(caseName)
            };
        }, 4000)

    });
    console.error(Log + "End");
}

const getWindowsAndIsActiveCallback = (context, caseName) => {
    const Log = logTag + caseName + "getWindowsAndIsActiveCallback ";
    console.error(logTag + "Start");
    context.getWindows((err, res) => {
        if (err?.code) {
            console.error(Log + "execute err=" + JSON.stringify(err));
            return;
        }
        printWindowsElements(Log, res);
        setTimeout(() => {
            console.error(Log + " backArray = " + JSON.stringify(backArray));
            if(backArray.find(o => o === "isActive")){
                commonEventPublishOnAssistChange(caseName)
            };
        }, 4000)

    });
    console.error(Log + "End");
}

const getWindowsAndWindowIdCallback = (context, caseName) => {
    const Log = logTag + caseName + "getWindowsAndWindowIdCallback ";
    console.error(logTag + "Start");
    context.getWindows((err, res) => {
        if (err?.code) {
            console.error(Log + "execute err=" + JSON.stringify(err));
            return;
        }
        printWindowsElements(Log, res);
        setTimeout(() => {
            console.error(Log + " backArray = " + JSON.stringify(backArray));
            if(backArray.find(o => o === "windowId")){
                commonEventPublishOnAssistChange(caseName)
            };
        }, 4000);
    });
    console.error(Log + "End");
}

const getWindowsAndParentCallback = (context, caseName) => {
    const Log = logTag + caseName + "getWindowsAndParentCallback ";
    console.error(logTag + "Start");
    context.getWindows((err, res) => {
        if (err?.code) {
            console.error(Log + "execute err=" + JSON.stringify(err));
            return;
        }
        printWindowsElements(Log, res);
        setTimeout(() => {
            console.error(Log + " backArray = " + JSON.stringify(backArray));
            if(backArray.find(o => o === "parent")){
                commonEventPublishOnAssistChange(caseName)
            };
        }, 4000)

    });
    console.error(Log + "End");
}

const getWindowsByIdAndParentCallback = (context, displayId, caseName) => {
    const Log = logTag + caseName + "getWindowsByIdAndParentCallback ";
    console.error(Log + "Start");
    context.getWindows(displayId, (err, res) => {
        if (err?.code) {
            console.error(Log + "execute err=" + JSON.stringify(err));
            return;
        }
        printWindowsElements(Log, res);
        setTimeout(() => {
            console.error(Log + " backArray = " + JSON.stringify(backArray));
            if(backArray.find(o => o === "parent")){
                commonEventPublishOnAssistChange(caseName)
            };
        }, 4000)
    });
    console.error(Log + "End");
}

const getWindowsByIdAndParentPromise = (context, displayId, caseName) => {
    const Log = logTag + caseName + "getWindowsByIdAndParentPromise ";
    console.error(logTag + "Start");
    context.getWindows(displayId).then((res) => {
        printWindowsElements(Log, res);
        setTimeout(() => {
            console.error(Log + " back = " + JSON.stringify(backArray));
            if(backArray.find(o => o === "parent")){
                commonEventPublishOnAssistChange(caseName)
            };
        }, 4000)

    }).catch((err) => {
        console.error(Log + "execute err=" + JSON.stringify(err));
    });
    console.error(Log + "End");
}

const getWindowsCallback = (context, caseName) => {
    const Log = logTag + caseName + "getWindowsByCallback ";
    console.info(logTag + "Start");
    context.getWindows((err, res) => {
        if (err?.code) {
            console.info(Log + "execute err=" + JSON.stringify(err));
            return;
        }
        setTimeout(() => {
            commonEventPublishOnAssistChange(caseName)
        }, 3000)
        printLongText(Log + "execute ", res);
    });
    console.info(Log + "End");
}

const getWindowsCallBackExecutePerformAction = (context, caseName, searchText, action, args?: object) => {
    const Log = logTag + caseName + "getWindowsCallBackExecutePerformAction ";
    console.info(Log + "Start");
    context.getWindows((err, res) => {
        if (err?.code) {
            console.info(Log + "execute err=" + JSON.stringify(err));
            return;
        }
        if (res) {
            context.getWindowRootElement((err, res) => {
                if (err?.code) {
                    console.info(logTag + "getWindowRootElement err=" + JSON.stringify(err));
                    return;
                }
                if (res) {
                    res.findElement('content', searchText).then((AccessibilityElementArray) => {
                        console.info(logTag + "getWindowsCallBackExecutePerformAction res=" + JSON.stringify(AccessibilityElementArray));
                        AccessibilityElementArray[0].performAction(action, args).then((performActionBack) => {
                            if (performActionBack) {
                                console.info(logTag + "performActionBack Promise success=" + JSON.stringify(performActionBack));

                            } else {
                                console.info(logTag + "performActionBack Promise err=" + JSON.stringify(performActionBack));
                            }

                        }).catch((actionNamesErr) => {
                            console.info(logTag + "performActionBack Promise err=" + JSON.stringify(actionNamesErr));
                        });

                    }).catch((AccessibilityElementArrayErr) => {
                        console.info(logTag + "AccessibilityElementArray Promise err=" + JSON.stringify(AccessibilityElementArrayErr));
                    });
                }
            })
        }
    });
    console.info(Log + "End");
}

const getWindowsByIdCallback = (context, displayId, caseName) => {
    const Log = logTag + caseName + "getWindowsByIdCallback ";
    console.info(Log + "Start");
    context.getWindows(displayId, (err, res) => {
        if (err?.code) {
            console.info(Log + "execute err=" + JSON.stringify(err));
            return;
        }
        if (res) {
            setTimeout(() => {
                commonEventPublishOnAssistChange(caseName)
            }, 3000)
        }
    });
    console.info(Log + "End");
}

const getWindowsByIdCallBackExecutePerformAction = (context, displayId, caseName, searchText, action, args?: object) => {
    const Log = logTag + caseName + "getWindowsByIdCallBackExecutePerformAction ";
    console.info(Log + "Start");
    context.getWindows(displayId, (err, res) => {
        if (err?.code) {
            console.info(Log + "execute err=" + JSON.stringify(err));
            return;
        }
        if (res) {
            context.getWindowRootElement((err, res) => {
                if (err?.code) {
                    console.info(logTag + "getWindowRootElement err=" + JSON.stringify(err));
                    return;
                }
                if (res) {
                    res.findElement('content', searchText).then((AccessibilityElementArray) => {
                        console.info(logTag + "getWindowsCallBackExecutePerformAction res=" + JSON.stringify(AccessibilityElementArray));
                        AccessibilityElementArray[0].performAction(action, args).then((performActionBack) => {
                            if (performActionBack) {
                                console.info(logTag + "performActionBack Promise success=" + JSON.stringify(performActionBack));
                            } else {
                                console.info(logTag + "performActionBack Promise err=" + JSON.stringify(performActionBack));
                            }
                        }).catch((actionNamesErr) => {
                            console.info(logTag + "performActionBack Promise err=" + JSON.stringify(actionNamesErr));
                        });

                    }).catch((AccessibilityElementArrayErr) => {
                        console.info(logTag + "AccessibilityElementArray Promise err=" + JSON.stringify(AccessibilityElementArrayErr));
                    });
                }
            })
        }
    });
    console.info(Log + "End");
}

const getWindowsByIdPromiseExecutePerformAction = (context, displayId, caseName, searchText, action, args?: object) => {
    const Log = logTag + caseName + "getWindowsByIdPromiseExecutePerformAction ";
    console.info(logTag + "Start");
    context.getWindows(displayId).then((res) => {
        if (res) {
            context.getWindowRootElement((err, res) => {
                if (err?.code) {
                    console.info(logTag + "getWindowRootElement err=" + JSON.stringify(err));
                    return;
                }
                if (res) {
                    res.findElement('content', searchText).then((AccessibilityElementArray) => {
                        console.info(logTag + "getWindowsCallBackExecutePerformAction res=" + JSON.stringify(AccessibilityElementArray));
                        AccessibilityElementArray[0].performAction(action, args).then((performActionBack) => {
                            if (performActionBack) {
                                console.info(logTag + "performActionBack Promise success=" + JSON.stringify(performActionBack));
                            } else {
                                console.info(logTag + "performActionBack Promise err=" + JSON.stringify(performActionBack));
                            }
                        }).catch((actionNamesErr) => {
                            console.info(logTag + "performActionBack Promise err=" + JSON.stringify(actionNamesErr));
                        });

                    }).catch((AccessibilityElementArrayErr) => {
                        console.info(logTag + "AccessibilityElementArray Promise err=" + JSON.stringify(AccessibilityElementArrayErr));
                    });
                }
            })
        }
    }).catch((err) => {
        console.info(Log + "execute err=" + JSON.stringify(err));
    });
    console.info(Log + "End");
}

const getWindowsByIdPromise = (context, displayId, caseName) => {
    const Log = logTag + caseName + "getWindowsByIdCallback ";
    console.info(logTag + "Start");
    context.getWindows(displayId).then((res) => {
        if (res) {
            setTimeout(() => {
                commonEventPublishOnAssistChange(caseName)
            }, 3000)
        }
    }).catch((err) => {
        console.info(Log + "execute err=" + JSON.stringify(err));
    });
    console.info(Log + "End");
}

class ServiceExtAbility extends AccessibilityExtensionAbility {
    onConnect() {
        const context = this.context;
        console.info(logTag + "WindowInfo onAbilityConnected");
        var commonEventSubscribeInfo = {
            events: ["on_assist_change"]
        }
        function subscriberCallback(err, data) {
            console.info(logTag + "WindowInfo subscriberCallback start");
            console.info(logTag + "WindowInfo receive event err:" + JSON.stringify(err));
            console.info(logTag + "WindowInfo receive event data:" + JSON.stringify(data));
            try {
                excuteMethod(context, data.data);
            } catch (e) {
                console.info(logTag + "excuteMethod error " + JSON.stringify(e))
            }
            console.info(logTag + "WindowInfo subscriberCallback end");
        }
        var subscriber
        commonEvent.createSubscriber(commonEventSubscribeInfo).then(function (data) {
            console.info(logTag + " WindowInfo createSubscriber Start====")
            subscriber = data;
            commonEvent.subscribe(subscriber, subscriberCallback);
            console.info(logTag + " WindowInfo createSubscriber End====")
        })
        console.info(logTag + " WindowInfo onShow End====")
    }
}

const commonEventPublishOnAssistChange = (caseName) => {
    function publishCallback(err) {
        console.info(logTag + "on_assist_change_extra WindowInfo publish call back result:" + JSON.stringify(err));
    }
   var commonEventPublishData = {
        data: caseName + "_on_assist_change_extra_success",
    }
    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
}

function printLongText(logTag, res) {
    let resJson = JSON.stringify(res);
    if (resJson && resJson.length > 1000) {
        console.info(logTag + "result is too long");
        for (let index = 0;index < resJson.length / 1000; index++) {
            let outJson = resJson.slice(index * 1000, (index + 1) * 1000);
            console.info(logTag + "result paragraph " + (index + 1) + "=" + outJson);
        }
    } else {
        console.info(logTag + "res=" + resJson);
    }
}

export default ServiceExtAbility