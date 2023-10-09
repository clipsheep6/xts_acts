/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

import mouseEvent from '@ohos.multimodalInput.mouseEvent'
import touchEvent from '@ohos.multimodalInput.touchEvent'
import inputkeyCode from '@ohos.multimodalInput.keyCode';
import inputEventClient from '@ohos.multimodalInput.inputEventClient';
export default function InputEventClient_test() {
    describe('InputEventClient_test', function () {
        const errCode = {
            COMMON_PARAMETER_CODE: 401
        }
        it("InputEventClient_injectKeyEvent_test_01", 0, function () {
            console.info(`InputEventClient_injectKeyEvent_test_01 enter`);
            try {
                let backKeyDown = {
                    isPressed: true,
                    keyCodes: [inputkeyCode.KeyCode.KEYCODE_C],
                    keyDownDuration: 0,
                    isIntercepted: false
                }
                inputEventClient.injectEvent({ KeyEvent: backKeyDown });

                let backKeyUp = {
                    isPressed: false,
                    keyCodes: [inputkeyCode.KeyCode.KEYCODE_C],
                    keyDownDuration: 0,
                    isIntercepted: false
                };
                inputEventClient.injectEvent({ KeyEvent: backKeyUp });
                expect(true).assertTrue();
            } catch (error) {
                console.log(`Failed to inject KeyEvent, error: ${JSON.stringify(error, [`code`, `message`])}`);
                expect(false).assertTrue();
            }
        })

        it("InputEventClient_injectKeyEvent_test_02", 0, function () {
            console.info(`InputEventClient_injectKeyEvent_test_02 enter`);
            try {
                let backKeyDown = {
                    isPressed: true,
                    keyCodes: [inputkeyCode.KeyCode.KEYCODE_C],
                    keyDownDuration: 700,
                    isIntercepted: false
                }
                inputEventClient.injectEvent({ KeyEvent: backKeyDown });

                let backKeyUp = {
                    isPressed: false,
                    keyCodes: [inputkeyCode.KeyCode.KEYCODE_C],
                    keyDownDuration: 0,
                    isIntercepted: false
                };
                inputEventClient.injectEvent({ KeyEvent: backKeyUp });
                expect(true).assertTrue();
            } catch (error) {
                console.log(`Failed to inject KeyEvent, error: ${JSON.stringify(error, [`code`, `message`])}`);
                expect(false).assertTrue();
            }
        })

        it("InputEventClient_injectKeyEvent_test_03", 0, function () {
            console.info(`InputEventClient_injectKeyEvent_test_03 enter`);
            try {
                let backKeyDownfirst = {
                    isPressed: true,
                    keyCodes: [inputkeyCode.KeyCode.KEYCODE_CTRL_LEFT],
                    keyDownDuration: 0,
                    isIntercepted: false
                }
                inputEventClient.injectEvent({ KeyEvent: backKeyDownfirst });

                let backKeyDownSecond = {
                    isPressed: true,
                    keyCodes: [inputkeyCode.KeyCode.KEYCODE_CTRL_LEFT, inputkeyCode.KeyCode.KEYCODE_A],
                    keyDownDuration: 0,
                    isIntercepted: false
                }
                inputEventClient.injectEvent({ KeyEvent: backKeyDownSecond });

                let backKeyUpfirst = {
                    isPressed: false,
                    keyCodes: [inputkeyCode.KeyCode.KEYCODE_A],
                    keyDownDuration: 0,
                    isIntercepted: false
                };
                inputEventClient.injectEvent({ KeyEvent: backKeyUpfirst });

                let backKeyUpSecond = {
                    isPressed: false,
                    keyCodes: [inputkeyCode.KeyCode.KEYCODE_CTRL_LEFT],
                    keyDownDuration: 0,
                    isIntercepted: false
                };
                inputEventClient.injectEvent({ KeyEvent: backKeyUpSecond });
                expect(true).assertTrue();
            } catch (error) {
                console.log(`Failed to inject KeyEvent, error: ${JSON.stringify(error, [`code`, `message`])}`);
                expect(false).assertTrue();
            }
        })

        it("InputEventClient_injectMouseEvent_test_01", 0, function () {
            console.info(`InputEventClient_injectMouseEvent_test_01 enter`);
            try {
                let mouseEventUp = {
                    action: mouseEvent.Action.BUTTON_DOWN,
                    screenX: 200,
                    screenY: 620,
                    button: mouseEvent.Button.LEFT,
                    toolType: mouseEvent.ToolType.MOUSE,
                }
                inputEventClient.injectMouseEvent({ mouseEvent: mouseEventUp });

                let mouseEventDown = {
                    action: mouseEvent.Action.BUTTON_UP,
                    screenX: 200,
                    screenY: 620,
                    button: mouseEvent.Button.LEFT,
                    toolType: mouseEvent.ToolType.MOUSE,
                };
                inputEventClient.injectMouseEvent({ mouseEvent: mouseEventDown });
                expect(true).assertTrue();
            } catch (error) {
                console.log(`Failed to inject MouseEvent, error: ${JSON.stringify(error, [`code`, `message`])}`);
                expect(false).assertTrue();
            }
        })

        it("InputEventClient_injectMouseEvent_test_02", 0, function () {
            console.info(`InputEventClient_injectMouseEvent_test_02 enter`);
            try {
                let mouseButtonFirstUp = {
                    action: mouseEvent.Action.BUTTON_DOWN,
                    screenX: 200,
                    screenY: 620,
                    button: mouseEvent.Button.LEFT,
                    toolType: mouseEvent.ToolType.MOUSE,
                }
                inputEventClient.injectMouseEvent({ mouseEvent: mouseButtonFirstUp });

                let mouseButtonFirstDown = {
                    action: mouseEvent.Action.BUTTON_UP,
                    screenX: 200,
                    screenY: 620,
                    button: mouseEvent.Button.LEFT,
                    toolType: mouseEvent.ToolType.MOUSE,
                };
                inputEventClient.injectMouseEvent({ mouseEvent: mouseButtonFirstDown });

                let mouseButtonSecondUp = {
                    action: mouseEvent.Action.BUTTON_DOWN,
                    screenX: 200,
                    screenY: 620,
                    button: mouseEvent.Button.LEFT,
                    toolType: mouseEvent.ToolType.MOUSE,
                }
                inputEventClient.injectMouseEvent({ mouseEvent: mouseButtonSecondUp });

                let mouseButtonSecondDown = {
                    action: mouseEvent.Action.BUTTON_UP,
                    screenX: 200,
                    screenY: 620,
                    button: mouseEvent.Button.LEFT,
                    toolType: mouseEvent.ToolType.MOUSE,
                };
                inputEventClient.injectMouseEvent({ mouseEvent: mouseButtonSecondDown });
                expect(true).assertTrue();
            } catch (error) {
                console.log(`Failed to inject MouseEvent, error: ${JSON.stringify(error, [`code`, `message`])}`);
                expect(false).assertTrue();
            }
        })

        it("InputEventClient_injectMouseEvent_test_03", 0, function () {
            console.info(`InputEventClient_injectMouseEvent_test_03 enter`);
            try {
                let mouseEventFirstMove = {
                    action: mouseEvent.Action.MOVE,
                    screenX: 600,
                    screenY: 600,
                    toolType: mouseEvent.ToolType.MOUSE,
                }
                inputEventClient.injectMouseEvent({ mouseEvent: mouseEventFirstMove });

                let mouseEventSecondMove = {
                    action: mouseEvent.Action.MOVE,
                    screenX: 600,
                    screenY: 800,
                    toolType: mouseEvent.ToolType.MOUSE,
                };
                inputEventClient.injectMouseEvent({ mouseEvent: mouseEventSecondMove });
                expect(true).assertTrue();
            } catch (error) {
                console.log(`Failed to inject MouseEvent, error: ${JSON.stringify(error, [`code`, `message`])}`);
                expect(false).assertTrue();
            }
        })

        it("InputEventClient_injectMouseEvent_test_04", 0, function () {
            console.info(`InputEventClient_injectMouseEvent_test_04 enter`);
            try {
                let touchPadEventUp = {
                    action: mouseEvent.Action.ACTION_DOWN,
                    screenX: 200,
                    screenY: 620,
                    toolType: mouseEvent.ToolType.TOUCHPAD,
                }
                inputEventClient.injectMouseEvent({ mouseEvent: touchPadEventUp });

                let touchPadEventDown = {
                    action: mouseEvent.Action.ACTION_UP,
                    screenX: 200,
                    screenY: 620,
                    toolType: mouseEvent.ToolType.TOUCHPAD,
                };
                inputEventClient.injectMouseEvent({ mouseEvent: touchPadEventDown });
                expect(true).assertTrue();
            } catch (error) {
                console.log(`Failed to inject MouseEvent, error: ${JSON.stringify(error, [`code`, `message`])}`);
                expect(false).assertTrue();
            }
        })

        it("InputEventClient_injectMouseEvent_test_05", 0, function () {
            console.info(`InputEventClient_injectMouseEvent_test_05 enter`);
            try {
                var touchPadButtonDown = {
                    action: mouseEvent.Action.BUTTON_DOWN,
                    screenX: 200,
                    screenY: 620,
                    button: mouseEvent.Button.LEFT,
                    toolType: mouseEvent.ToolType.TOUCHPAD,
                }
                inputEventClient.injectMouseEvent({ mouseEvent: touchPadButtonDown });

                let touchPadButtonUp = {
                    action: mouseEvent.Action.BUTTON_UP,
                    screenX: 200,
                    screenY: 620,
                    button: mouseEvent.Button.LEFT,
                    toolType: mouseEvent.ToolType.TOUCHPAD,
                };
                inputEventClient.injectMouseEvent({ mouseEvent: touchPadButtonUp });
                expect(true).assertTrue();
            } catch (error) {
                console.log(`Failed to inject MouseEvent, error: ${JSON.stringify(error, [`code`, `message`])}`);
                expect(false).assertTrue();
            }
        })

        it("InputEventClient_injectTouchEvent_test_01", 0, function () {
            console.info(`InputEventClient_injectTouchEvent_test_01 enter`);
            try {
                let touchEventUp = {
                    action: touchEvent.Action.DOWN,
                    sourceType: touchEvent.SourceType.TOUCH_SCREEN,
                    screenX: 200,
                    screenY: 620,
                    pressedTime: 0,
                };
                inputEventClient.injectTouchEvent({ touchEvent: touchEventUp });

                let touchEventDown = {
                    action: touchEvent.Action.UP,
                    sourceType: touchEvent.SourceType.TOUCH_SCREEN,
                    screenX: 200,
                    screenY: 620,
                    pressedTime: 0,
                };
                inputEventClient.injectTouchEvent({ touchEvent: touchEventDown });
                expect(true).assertTrue();
            } catch (error) {
                console.log(`Failed to inject touchEvent, error: ${JSON.stringify(error, [`code`, `message`])}`);
                expect(false).assertTrue();
            }
        })

        it("InputEventClient_injectTouchEvent_test_02", 0, function () {
            console.info(`InputEventClient_injectTouchEvent_test_02 enter`);
            try {
                let touchEventDown = {
                    action: touchEvent.Action.DOWN,
                    sourceType: touchEvent.SourceType.TOUCH_SCREEN,
                    screenX: 70,
                    screenY: 370,
                    pressedTime: 1000
                };
                inputEventClient.injectTouchEvent({ touchEvent: touchEventDown });

                let startTimeMs = 0
                let totalTimeMs = 1000
                let endTimeMs = startTimeMs + totalTimeMs
                let currentTimeMs = startTimeMs;
                let num = 70;
                for (var i = startTimeMs; i < endTimeMs; i++) {
                    if (num < 500) {
                        let touchEventMove = {
                            action: touchEvent.Action.MOVE,
                            sourceType: touchEvent.SourceType.TOUCH_SCREEN,
                            screenX: num,
                            screenY: 370,
                            pressedTime: currentTimeMs,
                        };
                        inputEventClient.injectTouchEvent({ touchEvent: touchEventMove });
                    }
                    startTimeMs = startTimeMs + 1;
                    num = num + 5;
                };

                let touchEventUp = {
                    action: touchEvent.Action.UP,
                    sourceType: touchEvent.SourceType.TOUCH_SCREEN,
                    screenX: 70,
                    screenY: 370,
                    pressedTime: 0,
                };
                inputEventClient.injectTouchEvent({ touchEvent: touchEventUp })
                expect(true).assertTrue();
            } catch (error) {
                console.log(`Failed to inject touchEvent, error: ${JSON.stringify(error, [`code`, `message`])}`);
                expect(false).assertTrue();
            }
        })

        it("InputEventClient_injectTouchEvent_Exception_test_01", 0, function () {
            console.info(`InputEventClient_injectTouchEvent_Exception_test_01 enter`);
            try {
                let touchEventUp = {
                    action: -1,
                    sourceType: touchEvent.SourceType.TOUCH_SCREEN,
                    screenX: "abc",
                    screenY: "aef",
                    pressedTime: 0,
                };
                inputEventClient.injectTouchEvent({ touchEvent: touchEventUp });
                expect(false).assertTrue();
            } catch (error) {
                console.log(`Failed to inject touchEvent, error: ${JSON.stringify(error, [`code`, `message`])}`);
                expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
            }
        })

        it("InputEventClient_injectMouseEvent_Exception_test_01", 0, function () {
            console.info(`InputEventClient_injectMouseEvent_Exception_test_01 enter`);
            try {
                let mouseEventUp = {
                    action: -1,
                    screenX: "abc",
                    screenY: "abc",
                    button: -1,
                    toolType: mouseEvent.ToolType.MOUSE,
                }
                inputEventClient.injectMouseEvent({ mouseEvent: mouseEventUp });
                expect(false).assertTrue();
            } catch (error) {
                console.log(`Failed to inject MouseEvent, error: ${JSON.stringify(error, [`code`, `message`])}`);
                expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
            }
        })

        it("InputEventClient_injectKeyEvent_Exception_test_01", 0, function () {
            console.info(`InputEventClient_injectKeyEvent_Exception_test_01 enter`);
            try {
                let backKeyDown = {
                    isPressed: "abc",
                    keyCodes: -1,
                    keyDownDuration: 0,
                    isIntercepted: false
                }
                inputEventClient.injectEvent({ KeyEvent: backKeyDown });
                expect(false).assertTrue();
            } catch (error) {
                console.log(`Failed to inject KeyEvent, error: ${JSON.stringify(error, [`code`, `message`])}`);
                expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
            }
        })
    })
}